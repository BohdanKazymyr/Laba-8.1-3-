#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1(char)/Laba 8.1(char).cpp"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "fff";
			Count(str, 0);
			int expected = 2, actual;
			Assert::AreEqual(expected, actual);
		}
	};
}
