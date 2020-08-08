/*
name: jianxin zhu
date: aug/07/2020
*/

#include"QuadraticEquation.h"

QuadraticEquation::QuadraticEquation(double a, double b, double c)
	:value_B(b), value_C(c)
{
	if (a <= 0)
	{
		value_A = 1;
	}
	else
	{
		value_A = a;
	}
}
QuadraticEquation::QuadraticEquation(const QuadraticEquation& right)
	:value_A(right.value_A), value_B(right.value_B),value_C(right.value_C)
{

}
QuadraticEquation::~QuadraticEquation()
{

}
QuadraticEquation QuadraticEquation::operator+(const QuadraticEquation& right)
{
	return QuadraticEquation(value_A + right.value_A, value_B + right.value_B, value_C + right.value_C);

}
QuadraticEquation QuadraticEquation::operator-(const QuadraticEquation& right)
{
	return QuadraticEquation(value_A - right.value_A, value_B - right.value_B, value_C - right.value_C);
}
const QuadraticEquation& QuadraticEquation::operator=(const QuadraticEquation& right)
{
	if (*this == right)
	{
		return *this;
	}
	else
	{
		value_A = right.value_A;
		value_B = right.value_B;
		value_C = right.value_C;
	}
	return *this;
}
bool QuadraticEquation::operator==(const QuadraticEquation& right) const
{
	if ((value_C == right.value_C) && (value_B == right.value_B) && (value_A == right.value_A))
	{
		return true;
	}

	return false;
}

std::ostream& operator<<(std::ostream& output, const QuadraticEquation& right)
{
	output << right.value_A << "X^2" << ((right.value_B > 0) ? "+" : "") << right.value_B << "X"
		<< ((right.value_C > 0) ? "+" : "") << right.value_C;
	output << std::endl;

	return output;
}
