#ifndef A_TEMPERATURE
#define A_TEMPERATURE


#include <math.h>
#include <string>
#include <typeinfo>

#include "A_Temperature_Unit.h"
#include "Invalid_Temperature_Value_Exception.h"
#include "Not_Divisible_By_One_Hundredth_Exception.h"
#include "Temperature_Value_Greater_Than_Upper_Limit_Exception.h"
#include "Temperature_Value_Less_Than_Lower_Limit_Exception.h"


namespace type_definer_and_assigner {


	class A_Temperature {

	private:
		A_Temperature_Unit the_temperature_unit = A_Temperature_Unit(A_Temperature_Scale("Celsius"));
		double the_temperature_value = -273.15;

	public:
		explicit A_Temperature() {

		};


		void Takes_A_Unit_Of(A_Temperature_Unit the_temperature_unit_to_use) {
			this->the_temperature_unit = the_temperature_unit_to_use;
		}


		void Check(double the_temperature_value_to_check) {

			try {
				if (round(the_temperature_value_to_check * 100.0) / 100.0 !=
					the_temperature_value_to_check) {
					throw Not_Divisible_By_One_Hundredth_Exception(
						"Exception: Temperature value not divisible by one hundredth.");
				}
			}
			catch (Not_Divisible_By_One_Hundredth_Exception& e) {
				throw Not_Divisible_By_One_Hundredth_Exception(e.what());
			}

			if (this->the_temperature_unit.The_Temperature_Scale().Type() == "Celsius") {

				if (the_temperature_value_to_check < -273.15) {
					throw Temperature_Value_Less_Than_Lower_Limit_Exception(
						"Exception: Temperature value less than lower limit.");
				};

				if (the_temperature_value_to_check > 10000.0) {
					throw Temperature_Value_Greater_Than_Upper_Limit_Exception(
						"Exception: Temperature value greater than upper limit.");
				}

			}

			if (this->the_temperature_unit.The_Temperature_Scale().Type() == "Fahrenheit") {

				if (the_temperature_value_to_check < -459.67) {
					throw Temperature_Value_Less_Than_Lower_Limit_Exception(
						"Exception: Temperature value less than lower limit.");
				};

				if (the_temperature_value_to_check > 10000.0) {
					throw Temperature_Value_Greater_Than_Upper_Limit_Exception(
						"Exception: Temperature value greater than upper limit.");
				}

			}

		};


		void Takes_A_Value_Of(double the_temperature_value_to_use) {

			try {
				Check(the_temperature_value_to_use);
			}
			catch (std::exception& e) {
				throw Invalid_Temperature_Value_Exception(e.what());
			}

			this->the_temperature_value = the_temperature_value_to_use;

		};


		void Takes_A_Unit_And_A_Value_Of(
			A_Temperature_Unit the_temperature_unit_to_use, double the_temperature_value_to_use) {

			this->the_temperature_unit = the_temperature_unit_to_use;

			try {
				Check(the_temperature_value_to_use);
			}
			catch (std::exception& e) {
				throw Invalid_Temperature_Value_Exception(e.what());
			}

			this->the_temperature_value = the_temperature_value_to_use;

		};

	};

}


#endif