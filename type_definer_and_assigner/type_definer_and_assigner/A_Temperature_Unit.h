#ifndef A_TEMPERATURE_UNIT
#define A_TEMPERATURE_UNIT


#include "A_Temperature_Scale.h"


namespace type_definer_and_assigner {

	class A_Temperature_Unit {

	private:
		A_Temperature_Scale the_temperature_scale;

	public:
		explicit A_Temperature_Unit() {

		};
		explicit A_Temperature_Unit(A_Temperature_Scale the_temperature_scale_to_use) {
			this->the_temperature_scale = the_temperature_scale_to_use;
		};
		A_Temperature_Scale The_Temperature_Scale() {
			return this->the_temperature_scale;
		};

	};

}


#endif