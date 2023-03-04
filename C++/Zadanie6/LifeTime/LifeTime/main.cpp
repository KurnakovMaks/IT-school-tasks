#include <iostream>
#include "TestBase.h"
#include "Child.h"
#include "Aggregate.h"

using namespace std;

int main() {
    {
        cout << "---Create dynamic array-------------------------" << endl;
        cout << "Creating dynamic array of TestBase objects..." << endl;
        TestBase* p = new TestBase[3];
        cout << "Dynamic array of TestBase objects created." << endl;
        delete[] p;
        cout << "Dynamic array of TestBase objects destroyed." << endl;
        cout << "-----------------------------End dynamic array---" << endl;
    }

    {
        cout << "\n\n---Start foo goo-----------------------------------" << endl;
        TestBase t;
        TestBase tt(t);
        {
            cout << "---Start foo---------------------------------------" << endl;
            t.foo(t);
            cout << "--------------------------------------Finish foo---" << endl;
        }
        {
            cout << "\n---Start goo---------------------------------------" << endl;
            t.goo(t);
            cout << "--------------------------------------Finish foo---" << endl;
        }
        cout << "\n-------------------------------------End foo goo---" << endl;
    }
    
    {         cout << "\n\n---Start child-------------------------------------" << endl; Child c(4);         cout << "------------------------------------Finish child---" << endl; }

    {         cout << "\n---Start Aggregate---------------------------------" << endl; Aggregate ag(4);         cout << "--------------------------------Finish Aggregate---" << endl; }
}