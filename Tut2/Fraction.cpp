#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::~Fraction()
{
}

Fraction Fraction::Add(Fraction f1, Fraction f2)
{
	Fraction answer;
	answer.denominator = (f1.denominator * f2.denominator);
	answer.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
	return answer;
}

Fraction Fraction::Subtract(Fraction f1, Fraction f2)
{
	Fraction answer;
	answer.denominator = (f1.denominator * f2.denominator);
	answer.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
	return answer;
}
