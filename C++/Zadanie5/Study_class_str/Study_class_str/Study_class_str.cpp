#include <iostream>
#include "Str.h"

using namespace std;

void foo(Str sz)
{ }

int main()
{
    Str s1("abcde");
    Str s2("abz");

    cout << "str1 before Copy: " << s1 << endl;
    cout << "str2 before Copy: " << s2 << endl;

    s1 = s2;
    cout << "------------------------" << endl;

    cout << "str1 after Copy: " << s1 << endl;
    cout << "str2 after Copy: " << s2 << endl;
}