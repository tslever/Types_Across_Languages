#ifndef A_TEMPERATURE_SCALE
#define A_TEMPERATURE_SCALE


#include <string>


namespace type_definer_and_assigner {

	class A_Temperature_Scale {

	private:
		std::string type;

	public:
		A_Temperature_Scale();

		A_Temperature_Scale(std::string type_to_use);

		std::string Type();

	};

}


#endif