#include <iostream>

#include "A_Temperature.h"
#include "A_Temperature_Unit.h"


using namespace type_definer_and_assigner;


int main()
{
	// TODO: Change A_Temperature_Scale to enum.
	// TODO: Get private block out of A_Temperature.h.
	A_Temperature_Scale Celsius = A_Temperature_Scale("Celsius");

	A_Temperature_Scale Fahrenheit = A_Temperature_Scale("Fahrenheit");

	A_Temperature my_temperature = A_Temperature();

	//my_temperature = 100.0;
	// Visual Studio 2019 throws compile-time error 'no operator "=" matches these operands'.

	try {
		my_temperature.Takes_A_Value_Of(100.0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		//return -1;
	}
	// Valid

	try {
		my_temperature.Takes_A_Value_Of(-20000.0);
	}
	catch (std::exception& e) {
		std::cout << "-20000" << std::endl;
		std::cerr << e.what() << std::endl;
		//return -1;
	}
	// Program throws runtime "Exception: Temperature value less than lower limit.".

	try {
		my_temperature.Takes_A_Unit_And_A_Value_Of(A_Temperature_Unit(Celsius), 0.0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		//return -1;
	}
	// Valid

	try {
		my_temperature.Takes_A_Unit_And_A_Value_Of(A_Temperature_Unit(Fahrenheit), 0.0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		//return -1;
	}
	// Valid

	/*try {
		my_temperature.Takes_A_Unit_And_A_Value_Of(A_Temperature_Unit(Kelvin), 0.0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}*/
	// Visual Studio throws compile-time error 'identifier "Kelvin" is undefined'.

	try {
		my_temperature.Takes_A_Unit_And_A_Value_Of(A_Temperature_Unit(Celsius), -302.00);
	}
	catch (std::exception& e) {
		std::cout << "-302" << std::endl;
		std::cerr << e.what() << std::endl;
		//return -1;
	}
	// Program throws runtime "Exception: Temperature value less than lower limit.".


	return 0;

}
