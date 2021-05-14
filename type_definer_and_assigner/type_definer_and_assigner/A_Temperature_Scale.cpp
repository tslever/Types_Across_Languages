#include <string>

#include "A_Temperature_Scale.h"


namespace type_definer_and_assigner {

	A_Temperature_Scale::A_Temperature_Scale() {

	};

	A_Temperature_Scale::A_Temperature_Scale(std::string type_to_use) {
		this->type = type_to_use;
	};

	std::string A_Temperature_Scale::Type() {
		return this->type;
	}

};