#pragma once

#include <iostream>
using namespace std;

class Complex {
public:
	double Re, Im;

	Complex(double re, double im) { Re = re; Im = im; }

	Complex operator + (Complex x) {
		return Complex(Re + x.Re, Im + x.Im);
	}
	Complex operator -(const Complex& c)const
	{
		return Complex(
			Re - c.Re,
			Im - c.Im
		);
	}
	Complex operator *(const Complex& c)const
	{
		return Complex(
			Re * c.Re - Im * c.Im,
			Re * c.Im + c.Re * Im
		);
	}
	Complex operator /(const Complex& c)const
	{
		double k = c.Re * c.Re + c.Im * c.Im;
		return Complex(
			(Re * c.Re + Im * c.Im) / k,
			(c.Re * Im - Re * c.Im) / k
		);
	}
	double Mod() { return sqrt((Re * Re) + (Im * Im)); }

	//метод сопряжения комплексного числа 
	//возвращает сопряженное число
	Complex Conjugate() { return Complex(Re, -Im); }
};

ostream& operator << (ostream& os, Complex z) {
	return os << '(' << z.Re << ", " << z.Im << ')' << endl;
}

