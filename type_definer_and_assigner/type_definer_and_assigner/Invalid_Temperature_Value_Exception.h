#include <exception>


namespace type_definer_and_assigner {


	class Invalid_Temperature_Value_Exception : public std::exception {

	private:
		const char* message;

	public:
		Invalid_Temperature_Value_Exception(const char* message_to_use);

		virtual const char* what() const throw();

	};

};