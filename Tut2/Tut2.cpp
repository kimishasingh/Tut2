
// Tut2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction frac1, frac2, sum, diff, product, quotient, temp;

	cout << "Enter numerator of fraction 1: ";
	cin >> frac1.numerator;

	cout << "Enter denominator of fraction 1: ";
	cin >> frac1.denominator;

	cout << "Enter numerator of fraction 2: ";
	cin >> frac2.numerator;

	cout << "Enter denominator of fraction 2: ";
	cin >> frac2.denominator;

	sum = temp.Add(frac1, frac2);
	diff = temp.Subtract(frac1, frac2);
	product = temp.Multiply(frac1, frac2);
	quotient = temp.Divide(frac1, frac2);

	cout << frac1.numerator << "/" << frac1.denominator << " + " << frac2.numerator << "/" << frac2.denominator << " = " << sum.numerator << "/" << sum.denominator << endl;
	cout << frac1.numerator << "/" << frac1.denominator << " - " << frac2.numerator << "/" << frac2.denominator << " = " << diff.numerator << "/" << diff.denominator << endl;
	cout << frac1.numerator << "/" << frac1.denominator << " * " << frac2.numerator << "/" << frac2.denominator << " = " << product.numerator << "/" << product.denominator << endl;
	cout << frac1.numerator << "/" << frac1.denominator << " / " << frac2.numerator << "/" << frac2.denominator << " = " << quotient.numerator << "/" << quotient.denominator << endl;
	system("pause");
	return 0;
}

