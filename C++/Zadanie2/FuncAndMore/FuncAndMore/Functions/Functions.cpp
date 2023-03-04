#include <iostream>
#include "utils.h"

using namespace std;


int A(int n);
int B(int n);

int A(int n) {
    if (n == 1 || n == 0)
        return n;
    if (n > 0)
        return B(n / 2);
    else
        return B(-n / 2);
}

int B(int n) {
    if (n == 1 || n == 0)
        return n;
    if (n > 0)
        return A(n / 2);
    else
        return A(-n / 2);
}

unsigned int NOD(unsigned int m, unsigned int n);

double sum_numbers(int n);

int main()
{
    int x, y;

    // Прочтем x и y с консоли.
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    Swap(x, y);

    cout << "After swap" << endl;
    cout << "x = " << x << "; y = " << y << endl << endl;

    cout << "NOD is " << NOD(x, y) << endl << endl;

    cout << x << " is the number of numbers to sum" << endl;

    double result = sum_numbers(x);

    cout << "The sum is: " << result << endl;

    return 0;
}

unsigned int NOD(unsigned int m, unsigned int n) {
    unsigned int r;
    while ((m % n) > 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return n;
}

double sum_numbers(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += n + i;
    }
    return sum;
}