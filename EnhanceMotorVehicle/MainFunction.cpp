/*
name: jianxin zhu
date: aug/05/2020
*/
#include"EnhanceMotorVehicle.h"
#include<iostream>

using namespace std;

int main()
{
	EnhanceMotor car1{"Honda","98x","White",2014,3300};
	EnhanceMotor car2{};


	cout << "Display the car1 information: \n" << car1;
	cout << "Display the car2 information by default setting: \n" << car2;

	cout << "Enter Your car information by using this format\n"
		<< "*Make,*Fule Type,*Color,*YearOfManufacture,*EngineCapacity\n";

	cin >> car2;

	cout << "Display the car information after modified: " << endl;
	cout << car2;

	EnhanceMotor car3(car2);
	cout << "Assign car2 to car3: \n";

	cout << "Use relational operator to compare car2 and car3\n";
	if (car2 == car3)
	{
		cout << "Two object have same type car" << endl;
	}
	else
	{
		cout << "Two object have difference type car" << endl;
	}
	
}
