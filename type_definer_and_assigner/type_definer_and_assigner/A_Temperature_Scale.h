#ifndef A_TEMPERATURE_SCALE
#define A_TEMPERATURE_SCALE


namespace type_definer_and_assigner {

	class A_Temperature_Scale {

	private:
		std::string type;

	public:
		explicit A_Temperature_Scale() {

		};
		explicit A_Temperature_Scale(std::string type_to_use) {
			this->type = type_to_use;
		};
		std::string Type() {
			return this->type;
		}

	};

}


#endif