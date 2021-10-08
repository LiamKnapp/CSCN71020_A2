#include "pch.h"
#include "CppUnitTest.h"
//Liam Knapp
//CSN71020
//Assignment 2

extern "C" { // call functions from Main.c

	int getArea(int* length, int* width); // area function
	int getPerimeter(int* length, int* width); // perimeter function
	void setLength(int input, int* length); // length function
	void setWidth(int input, int* width); // width function
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestingAssignment2LiamKnapp
{
	TEST_CLASS(UnitTestingAssignment2LiamKnapp)
	{
	public:
        TEST_METHOD(TestArea) { // test area
            int Area = 0;
            int a = 10, b = 5;
            Area = getArea(&a, &b);// call Area calculation funcition
            Assert::AreEqual(50, Area); // Are they equal
        }
        TEST_METHOD(TestPerimeter) { // test perimeter
            int Perimeter = 0;
            int a = 10, b = 5;
            Perimeter = getPerimeter(&a, &b); // call perimeter calculation funcition
            Assert::AreEqual(25, Perimeter); // are they equal
        }
        TEST_METHOD(Test1Length) { // first test length test method
            int length = 100;
            int a = 0;
            setLength(length, &a);
            Assert::AreEqual(0, a); // if the length is 100 it should return 0
        }
        TEST_METHOD(Test2Length) { // second test length test method
            int length = -5;
            int a = 0;
            setLength(length, &a);
            Assert::AreEqual(0, a); // if the length is less then it should return 0
        }
        TEST_METHOD(Test3Length) { // third test length test method
            int length = 10;
            int a = 0;
            setLength(length, &a);
            Assert::AreEqual(10, a); // if the length is 10 then it should return 10
        }
        TEST_METHOD(Test1Width) {// first test width test method
            int width = 100;
            int a = 0;
            setWidth(width, &a);
            Assert::AreEqual(100, a);// if the width is 100 then it should return 100
        }
        TEST_METHOD(Test2Width) {// second test width test method
            int width = 0;
            int a = 0;
            setWidth(width, &a);
            Assert::AreEqual(0, a);// if the width is 0 then it should return 0
        }
        TEST_METHOD(Test3Width) {// third test width test method
            int width = 101;
            int a = 0;
            setWidth(width, &a);
            Assert::AreEqual(0, a);// if the width is 101 then it should return 0
        }
	};
}
