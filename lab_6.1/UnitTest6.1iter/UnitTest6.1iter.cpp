#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1iter/lab_6.1iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61iter
{
	TEST_CLASS(UnitTest61iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 22;
			int arr[n] = {30, 53, 11, 71, 22, 30, 31, 46, 25, 6, 17, 72, 58, 69, 60, 30, 27, 7, 54, 44, 31, 65};
			int suma = sum_element(arr, n);
			Assert::AreEqual(suma, 811);
		}
	};
}
