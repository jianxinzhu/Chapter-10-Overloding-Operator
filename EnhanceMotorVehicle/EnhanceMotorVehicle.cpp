/*
name: jianxin zhu
date: aug/05/2020
*/

#include"EnhanceMotorVehicle.h"

EnhanceMotor::EnhanceMotor(const std::string& m, const std::string& f, const std::string& c,
	int y, int e)
	:make(m),fuelType(f),color(c), yearOfManufacture(y), engineCapacity(e)
{

}
EnhanceMotor::EnhanceMotor(const EnhanceMotor& right)
{
	make = right.make;
	fuelType = right.fuelType;
	color = right.color;
	yearOfManufacture = right.yearOfManufacture;
	engineCapacity = right.engineCapacity;
}
EnhanceMotor::~EnhanceMotor()
{

}
bool EnhanceMotor::operator==(const EnhanceMotor& right) const
{
	if ((make == right.make) && (fuelType == right.fuelType) &&
		(color == right.color) && (yearOfManufacture == right.yearOfManufacture) &&
		(engineCapacity == right.engineCapacity))
	{
		return true;
	}


	return false;
}
bool EnhanceMotor::operator!=(const EnhanceMotor& right) const
{
	return !(*this == right);
}
bool EnhanceMotor::operator>(const EnhanceMotor& right) const
{
	if (this->yearOfManufacture <= right.yearOfManufacture)
	{
		return false;
	}
	else
	{
		return true;
	}
}
std::ostream& operator<<(std::ostream& output, const EnhanceMotor& item)
{
	output << "Make: " << item.make << "\nFuel Type: " << item.fuelType << "\nColor: " << item.color
		<< "\nYear Of Manufacture: " << item.yearOfManufacture << "\nEngine Capacity: "
		<< item.engineCapacity << std::endl;

	return output;
}
std::istream& operator>>(std::istream& input, EnhanceMotor& item)
{
	input >> item.make;
	input >> item.fuelType;
	input >> item.color;
	input >> item.yearOfManufacture;
	input >> item.engineCapacity;

	return input;
}
