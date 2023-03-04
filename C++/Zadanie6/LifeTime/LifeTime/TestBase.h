#pragma once
#include <iostream>

using namespace std;

class TestBase
{
	static int nCount;
public:
	TestBase() {
		nCount++;
		cout << "TestBase created. \tCount = " << nCount << endl;
	}
	TestBase(int n) {
		nCount++;
		cout << "TestBase created with parameter " << n << ". Count = " << nCount << endl;
	}
	~TestBase() {
		nCount--;
		cout << "TestBase destroyed. \tCount = " << nCount << endl;
	}
	TestBase(const TestBase& other) {
		nCount++;
		cout << "TestBase copied. \tCount = " << nCount << endl;
	}

	void foo(TestBase t) { cout << "foo is running." << endl; }

	void goo(TestBase& t) { cout << "goo is running." << endl; }
};