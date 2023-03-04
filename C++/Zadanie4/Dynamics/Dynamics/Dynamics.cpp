#include <iostream>
#include "Complex.h"
#include "Segment.h"

using namespace std;

//int main()
int main() {
    {
        Complex x(1, 2), y(2, 2);

        cout << "------Sum------" << endl;
        cout << x << " + " << y << " = " << x + y << endl;

        cout << "------Diff------" << endl;
        cout << x + y << " - " << y << " = " << x + y - y << endl;

        cout << "------Multi------" << endl;
        cout << x << " * " << y << " = " << x * y << endl;

        cout << "------Div------" << endl;
        cout << x << " / " << x << " = " << x / x << endl;

        cout << "------Mod------" << endl;
        cout << "Mod x = " << x.Mod() << endl;

        cout << "------Conjugate------" << endl;
        cout << "Conjugate x = " << x.Conjugate() << endl;
    }

    {
        Segment sgm(0, 5);
        Segment sgm2(10, 15);

        cout << "Segment1: " << sgm;
        cout << "Segment2: " << sgm2;
        cout << "Length of Segment1: " << sgm.length() << endl;
        cout << "Shared: " << (sgm& sgm2);
        sgm = sgm + 3;
        cout << "Segment1 +3: " << sgm;
        sgm2 = sgm2 - 3;
        cout << "Segment2 -3: " << sgm2;
        cout << "Shared: " << (sgm & sgm2);
        cout << "Shared: " << (sgm2 & sgm);
    }
};
