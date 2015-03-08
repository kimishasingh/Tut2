#pragma once
#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	int numerator;
	int denominator;

	Fraction();
	~Fraction();

	Fraction Add(Fraction f1, Fraction f2);
	Fraction Subtract(Fraction f1, Fraction f2);
	Fraction Multiply(Fraction f1, Fraction f2);
	Fraction Divide(Fraction f1, Fraction f2);
};

#endif

