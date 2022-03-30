#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8(zavd_1_char)/lab.8(zavd_1_char).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s1 = Include("SQ POO", "SQ");
			Assert::IsTrue;
		}

		TEST_METHOD(TestMethod2)
		{
			int s2 = Include("S Q POO", "SQ");
			Assert::IsFalse;
		}

	};
}
