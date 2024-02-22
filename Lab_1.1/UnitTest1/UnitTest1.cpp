#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.1/Triangle.h"
#include "../Lab_1.1/Triangle.cpp"
#include "../Lab_1.1/1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle triangle;
			triangle.Init(3, 4);

			triangle.Hypotenuse();
			
			Assert::AreEqual(5, triangle.Hypotenuse());
		}
	};
}
