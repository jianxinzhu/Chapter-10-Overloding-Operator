/*
name: jianxin zhu
date: aug/05/2020
*/

#include"ComplexNumber.h"

Complex::Complex(double r, double i)
	:real(r), imaginary(i)
{

}
Complex::~Complex()
{

}
Complex Complex::operator+(const Complex& right) const
{
	return Complex(real + right.real, imaginary + right.imaginary);
}
Complex Complex::operator-(const Complex & right) const
{
	return Complex(real - right.real, imaginary - right.imaginary);
}
Complex Complex::operator*(const Complex& right)
{
	double realNumber=(real * right.real) - (imaginary * right.imaginary);
	double imaginaryNumber = (real * right.imaginary) + (imaginary * right.real);

	return Complex(realNumber, imaginaryNumber);
}
bool Complex::operator==(const Complex & right) const
{
	if ((real == right.real) && (imaginary == right.imaginary))
	{
		return true;
	}
	return false;
}
bool Complex::operator!=(const Complex& right)const
{
	return !(*this == right);
}

std::ostream& operator<<(std::ostream& output, const Complex& number)
{
	output << number.real << ((number.imaginary > 0) ? "+" : "") << number.imaginary << "i";
	output << std::endl;
	return output;
}
