#include <iostream>
using namespace std;

void printBits(int x);
int main() {

    {
        cout << "%1. Делится ли целое x на целое y?" << endl;

        int x, y;
        cout << "Enter x and y: ";
        cin >> x >> y;
        if (x % y == 0)
        {
            cout << x << " is divisible by " << y << endl;
        }
        else
        {
            cout << x << " is not divisible by " << y << endl;
        }
    }

    {
        cout << "%2. Есть ли в последних 2-х битах целого x единички?" << endl;

        int x;
        cout << "Enter x: ";
        cin >> x;

        if (x & 3)
        {
            cout << "The last 2 bits of " << x << " have ...11" << endl;
        }
        else
        {
            cout << "The last 2 bits of " << x << " do not have ...11" << endl;
        }
    }

    {
        cout << "%3. Kак изменится двоичное представление натурального x в результате ..." << endl;

        int x;
        cout << "Enter x: ";
        cin >> x;

        x = (x - 1) & x; // set rightmost 1 bit to 0
        cout << "After the operation, x is " << x << endl;
    }

    {
        cout << "%4. Cуммa натуральных чисел от 1 до 100" << endl;

        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            sum += i;
        }
        cout << "The sum of the first 100 natural numbers is " << sum << endl;
    }

    {
        cout << "%5. Первые 10 натуральных числе в одну строку в порядке убывания" << endl;

        for (int i = 10; i >= 1; i--) {
            cout << i << " ";
        }
        cout << endl;
    }

    {
        cout << "%6. Первые 20 степеней 2" << endl;

        for (int i = 0; i <= 20; i++) {
            cout << "2^" << i << " = " << pow(2, i) << endl;
        }
    }

    {
        cout << "%7. 22-е число Фибоначчи" << endl;

        int a = 0, b = 1, c;
        for (int i = 2; i <= 22; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "The 22nd Fibonacci number is " << b << endl;
    }

    {
        cout << "%8. Суммa первых 10 членов ряда " << endl;

        double sum = 1; // initialize sum to the first term
        double term = 1; // initialize term to the first term
        for (int i = 1; i <= 10; i++) {
            term /= i;
            sum += term;
        }
        cout << "The sum of the first 10 terms is " << sum << endl;
    };

    {
        cout << "%9. Значение каждого бита целого числа на консоль" << endl;

        int positive = 10;
        int negative = -10;
        cout << "Positive: ";
        printBits(positive);
        cout << "Negative: ";
        printBits(negative);
    }
    return 0;
}
void printBits(int x)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        cout << ((x >> i) & 1);
    }
    cout << endl;
}
