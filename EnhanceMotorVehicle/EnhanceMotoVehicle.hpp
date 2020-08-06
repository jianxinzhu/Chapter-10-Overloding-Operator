/*
name: jianxin zhu
date: aug/05/2020
*/

#include<string>
#include<sstream>

#ifndef ENHANCEMOTOR_H
#define ENHANCEMOTOR_H

class EnhanceMotor
{
	friend std::ostream& operator<<(std::ostream&, const EnhanceMotor&);
	friend std::istream& operator>>(std::istream&, EnhanceMotor&);
public:
	EnhanceMotor(const std::string& = " ", const std::string& = " ", const std::string& = " ",
		int = 1960, int = 2500);
	EnhanceMotor(const EnhanceMotor&);
	~EnhanceMotor();

	bool operator==(const EnhanceMotor&) const;
	bool operator!=(const EnhanceMotor&) const;
	bool operator>(const EnhanceMotor&) const;



private:
	std::string make;
	std::string fuelType;
	std::string color;
	int yearOfManufacture;
	int engineCapacity;
};
#endif
