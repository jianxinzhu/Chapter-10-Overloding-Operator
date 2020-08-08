/*
name: jianxin zhu
date: aug/07/2020
*/

#include"Polynomial.h"
#include<stdexcept>


PloyNomial::PloyNomial(int subCoeff, int subExpon)
{
	setCoeffient(subCoeff);
	setExponent(subExpon);
}
PloyNomial::~PloyNomial()
{

}
void PloyNomial::setCoeffient(int number)
{
	if (number == 0)
	{
		coefficient = 1;
	}
	else
	{
		coefficient = number;
	}
}
void PloyNomial::setExponent(int number)
{
	if (number == 0)
	{
		exponent = 1;
	}
	else
	{
		exponent = number;
	}
}
int PloyNomial::get_Coeffient() const
{
	return coefficient;
}
int PloyNomial::get_Exponent() const
{
	return exponent;
}
PloyNomial PloyNomial::operator+(const PloyNomial& right)
{
	if (this->exponent == right.exponent)
	{
		return PloyNomial(coefficient + right.coefficient, exponent);
	}
	else
	{
		throw std::invalid_argument("Can not add.");
	}
}
PloyNomial PloyNomial::operator-(const PloyNomial& right)
{
	if (this->exponent == right.exponent)
	{
		return PloyNomial(coefficient - right.coefficient, exponent);
	}
	else
	{
		throw std::invalid_argument("can not subtract");
	}
}
PloyNomial PloyNomial::operator*(const PloyNomial& right)
{
	return PloyNomial(coefficient * right.coefficient, exponent + right.exponent);
}
PloyNomial PloyNomial::operator+=(const PloyNomial& right)
{
	if (this->exponent == right.exponent)
	{
		coefficient = coefficient + right.coefficient;
		return PloyNomial(coefficient, exponent);
	}
	else
	{
		throw std::invalid_argument("Can not add.");
	}
}
PloyNomial PloyNomial::operator -= (const PloyNomial & right)
{
	if (this->exponent == right.exponent)
	{
		return PloyNomial(coefficient - right.coefficient, exponent);
	}
	else
	{
		throw std::invalid_argument("can not subtract");
	}
}
PloyNomial PloyNomial::operator*=(const PloyNomial& right)
{
	return PloyNomial(coefficient * right.coefficient, exponent + right.exponent);
}
const PloyNomial& PloyNomial::operator=(const PloyNomial& right)
{
	coefficient = right.coefficient;
	exponent = right.exponent;

	return PloyNomial(coefficient, exponent);
}
std::ostream& operator<<(std::ostream& output, const PloyNomial& right)
{
	output << right.get_Coeffient() << "X^" << right.get_Exponent();
	output << std::endl;
	return output;
}
