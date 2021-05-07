#ifndef NOT_DIVISIBLE_BY_ONE_HUNDREDTH_EXCEPTION
#define NOT_DIVISIBLE_BY_ONE_HUNDREDTH_EXCEPTION


#include <exception>


namespace type_definer_and_assigner {


	class Not_Divisible_By_One_Hundredth_Exception : public std::exception {

	private:
		const char* message = "";
		explicit Not_Divisible_By_One_Hundredth_Exception() {

		};

	public:
		explicit Not_Divisible_By_One_Hundredth_Exception(const char* message_to_use) {
			this->message = message_to_use;
		}

		virtual const char* what() const throw() {

			return this->message;

		};

	};

};


#endif