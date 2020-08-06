/*
name: jianxin zhu
date: aug/05/2020
*/

#include<string>
#include<iostream>

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	friend std::ostream& operator<<(std::ostream&, const Complex&);
public:
	explicit Complex(double = 0.0, double = 0.0);
	~Complex();
	Complex operator+(const Complex&) const;
	Complex operator-(const Complex&) const;
	Complex operator* (const Complex&);

	bool operator==(const Complex&) const;
	bool operator!=(const Complex&) const;


private:
	double real =0.0;
	double imaginary=0.0;
};
#endif
