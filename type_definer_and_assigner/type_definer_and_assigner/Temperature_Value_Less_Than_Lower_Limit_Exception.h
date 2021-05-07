#ifndef TEMPERATURE_VALUE_LESS_THAN_LOWER_LIMIT_EXCEPTION
#define TEMPERATURE_VALUE_LESS_THAN_LOWER_LIMIT_EXCEPTION


#include <exception>


namespace type_definer_and_assigner {


	class Temperature_Value_Less_Than_Lower_Limit_Exception : public std::exception {

	private:
		const char* message = "";
		explicit Temperature_Value_Less_Than_Lower_Limit_Exception() {

		};

	public:
		explicit Temperature_Value_Less_Than_Lower_Limit_Exception(const char* message_to_use) {
			this->message = message_to_use;
		}

		virtual const char* what() const throw() {

			return this->message;

		};

	};

};


#endif