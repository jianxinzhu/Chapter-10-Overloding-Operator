/*
name: jianxin zhu
date: aug/07/2020
*/

#include<iostream>

#ifndef QUADRATICEQUATION_H
#define QUADRATICEUQATION_H

class QuadraticEquation
{
	friend std::ostream& operator<<(std::ostream&, const QuadraticEquation&);
public:
	QuadraticEquation(double=1.0, double=0.0, double=0.0);
	QuadraticEquation(const QuadraticEquation&);
	~QuadraticEquation();

	QuadraticEquation operator+(const QuadraticEquation&);
	QuadraticEquation operator-(const QuadraticEquation&);

	const QuadraticEquation& operator=(const QuadraticEquation&);
	bool  operator==(const QuadraticEquation&)const;

private:
	double value_A;
	double value_B;
	double value_C;

};
#endif
