#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1.1/Lab6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int c[3] = { -2, 5, 7 };
			int S = Sum(c, 3, 0, 0);
			Assert::AreEqual(S, 12);

		}
	};
}
