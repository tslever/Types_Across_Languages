package brss.type_definer_and_assigner;

public class A_Temperature {

	private A_Temperature_Unit the_temperature_unit = new A_Temperature_Unit(new Celsius());
	
	private double the_temperature_value;
	
	
	public A_Temperature() {
		
	}
	
	
	public void Takes_A_Unit_Of(A_Temperature_Unit the_temperature_unit_to_use) {
		
		this.the_temperature_unit = the_temperature_unit_to_use;
		
	}
	
	
	public void Check_For_Divisibility_By_One_Hundredth_For(double the_temperature_value_to_check)
		throws NotDivisibleByOneHundredthException {
		
		double remainder = the_temperature_value_to_check % 0.01;
		
		if (Math.abs(Math.round(remainder * 100.0) / 100.0) == 0.01) {
			if (Math.abs(Math.abs(the_temperature_value_to_check % 0.01) - 0.01) > 0.000001) {
				throw new NotDivisibleByOneHundredthException("");
			}
		}
		else {
			if (Math.abs(the_temperature_value_to_check % 0.01) > 0.000001) {
				throw new NotDivisibleByOneHundredthException("");
			}
		}
		
	}
	
	
	public void Check(double the_temperature_value_to_check)
		throws NotDivisibleByOneHundredthException,
			   TemperatureValueLessThanLowerLimitException,
			   TemperatureValueGreaterThanUpperLimitException {
		
		if (this.the_temperature_unit.The_Temperature_Scale() instanceof Celsius) {
			
			Check_For_Divisibility_By_One_Hundredth_For(the_temperature_value_to_check);
			
			if (the_temperature_value_to_check < -273.15) {
				throw new TemperatureValueLessThanLowerLimitException("Scale is Celsius.");
			}
			
			if (the_temperature_value_to_check > 10000.0) {
				throw new TemperatureValueGreaterThanUpperLimitException("Scale is Celsius.");
			}
			
		}
		
		if (this.the_temperature_unit.The_Temperature_Scale() instanceof Fahrenheit) {
			
			Check_For_Divisibility_By_One_Hundredth_For(the_temperature_value_to_check);
			
			if (the_temperature_value_to_check < -459.67) {
				throw new TemperatureValueLessThanLowerLimitException("Scale is Fahrenheit.");
			}
			
			if (the_temperature_value_to_check > 10000.0) {
				throw new TemperatureValueGreaterThanUpperLimitException("Scale is Fahrenheit.");
			}
			
		}
		
	}
	
	
	public void Takes_A_Value_Of(double the_temperature_value_to_use)
		throws NotDivisibleByOneHundredthException,
			   TemperatureValueLessThanLowerLimitException,
			   TemperatureValueGreaterThanUpperLimitException {
		
		Check(the_temperature_value_to_use);
		
		this.the_temperature_value = the_temperature_value_to_use;
		
	};
	
	
	public void Takes_A_Unit_And_A_Value_Of(
		A_Temperature_Unit the_temperature_unit_to_use, double the_temperature_value_to_use)
			throws NotDivisibleByOneHundredthException,
			   	   TemperatureValueLessThanLowerLimitException,
			   	   TemperatureValueGreaterThanUpperLimitException {
		
		this.the_temperature_unit = the_temperature_unit_to_use;
		
		Check(the_temperature_value_to_use);
		
		this.the_temperature_value = the_temperature_value_to_use;
		
	}
	
}
