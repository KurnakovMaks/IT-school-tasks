#pragma once

#include "TestBase.h"

using namespace std;

class Aggregate {
public:
    TestBase objTest;

    Aggregate() { cout << "Aggregate created." << endl; }
    Aggregate(int n) : objTest(n+1) { cout << "Aggregate created  with parameter " << n << endl; }
    ~Aggregate() { cout << "Aggregate destroyed." << endl; }
};