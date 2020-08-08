/*
name: jianxin zhu
date: aug/07/2020
*/

#include"QuadraticEquation.h"
#include<iostream>

using namespace std;

int main()
{
	QuadraticEquation r1(3, 2, 1);
	QuadraticEquation r2(2, 2, 10);
	QuadraticEquation r3;

	r3 = r1 + r2;
	cout << r3;
}
