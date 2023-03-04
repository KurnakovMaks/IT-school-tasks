#pragma once

#include "TestBase.h"
using namespace std;

class Child : public TestBase {
public:
    Child() { cout << "Child created." << endl; }
    Child(int n) : TestBase(2 * n) { cout << "Child created  with parameter " << n << endl; }
    ~Child() { cout << "Child destroyed." << endl; }
};