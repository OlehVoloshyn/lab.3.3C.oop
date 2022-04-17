#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.3.3C/Money.cpp"
#include "../lab.3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a(2, 3);
			Money b(2, 3);
			Money d, q;
			d = Add(a, b);
			Money c(3, 5);
			Money f(1, 1);
			q = Add(c, f);
			Assert::AreEqual(d.GetUah(), q.GetUah());
		}
	};
}
