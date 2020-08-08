/*
name: jianxin zhu
date: aug/07/2020
*/

#ifndef PLOYNOMIAL_H
#define PLOYNOMIAL_H
#include<iostream>

class PloyNomial
{
	friend std::ostream& operator<<(std::ostream&, const PloyNomial&);

public:
	PloyNomial(int = 1, int = 1);
	~PloyNomial();

	void setCoeffient(int);
	void setExponent(int);

	int get_Coeffient() const;
	int get_Exponent() const;

	const PloyNomial& operator=(const PloyNomial&);


	PloyNomial operator+(const PloyNomial&);
	PloyNomial operator-(const PloyNomial&);
	PloyNomial operator*(const PloyNomial&);
	PloyNomial operator+=(const PloyNomial&);
	PloyNomial operator-=(const PloyNomial&);
	PloyNomial operator*=(const PloyNomial&);
private:
	int coefficient;
	int exponent;
};
#endif
