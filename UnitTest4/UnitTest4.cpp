#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_04/Lab_05_04.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k;
			k = S0(50);
			Assert::AreEqual(k, -3.61663, 0.0001);
		}
	};
}
