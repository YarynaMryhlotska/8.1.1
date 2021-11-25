#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1.1/laba8.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char k = 'Q';
			char c = 'S';
			char* st = new char[10]{ " QS " };
			bool t = Include(st, c, k);
			bool a = 1;
			Assert::AreEqual(t, a);
		
		}
	};
}
