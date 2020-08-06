/*
name: jianxin zhu
date: aug/05/2020
*/
#include"ComplexNumber.h"
#include<iostream>

using namespace std;

int main()
{
	Complex number1(2, 5);
	Complex number2(4, -3);
	Complex number3;
	

	number3 = number1 * number2;

	cout << number3;

	Complex number4(2, 5);

	cout << "Compare number1 nad number4" << endl;
	if (number1 == number4)
	{
		cout << "They are equal" << endl;
	}
	else
	{
		cout << "They are not equal" << endl;
	}
}
