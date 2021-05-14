#include <exception>

#include "Invalid_Temperature_Value_Exception.h"


namespace type_definer_and_assigner {

	Invalid_Temperature_Value_Exception::Invalid_Temperature_Value_Exception(
		const char* message_to_use) {
		this->message = message_to_use;
	};

	const char* Invalid_Temperature_Value_Exception::what() const throw() {
		return this->message;
	};

};