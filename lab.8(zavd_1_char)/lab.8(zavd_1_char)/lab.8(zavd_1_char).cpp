//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//1. Вияснити, чи є серед цих символів пара сусідніх букв “SQ” аб о ”QS”.


#include <iostream>
using namespace std;

bool Include(const char* s, const char* cs)
{
	bool b = false;
	for (int j = 0; s[j] != '\0'; j++)
		if ((s[j] == 'S') && (s[j + 1] == 'Q' || s[j - 1] == 'Q'))
		{
			for (int i = 0; cs[i] != '\0'; i++)
				b = b && (strchr(s, cs[i]));
			b = true;
			break;
		}
	return b;
}

int main()
{
	char s[100];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	char cs[3];
	cout << "Included groups of 'SQ or QS': ";
	if (Include(s, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
