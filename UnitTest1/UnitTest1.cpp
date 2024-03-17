#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.5/Time.h"
#include "../lab2.5/Time.cpp"
#include "../lab2.5/Triad.h"
#include "../lab2.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad tr1(1, 2, 3);
			int t = tr1.getHour();
			Assert::AreEqual(1, t);
		}
	};
}
