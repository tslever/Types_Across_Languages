package brss.type_definer_and_assigner;

public class Main 
{
    public static void main( String[] args )
    	throws NotDivisibleByOneHundredthException,
    		   TemperatureValueLessThanLowerLimitException,
    		   TemperatureValueGreaterThanUpperLimitException
    {
        Celsius celsius = new Celsius();
        //Fahrenheit fahrenheit = new Fahrenheit();
        
        A_Temperature_Unit the_temperature_unit = new A_Temperature_Unit(celsius);
        
        A_Temperature my_temperature = new A_Temperature();
        
        //my_temperature = 100.0;
        // Eclipse throws compile-time error "Type mismatch: cannot convert from double to A_Temperature".
        
        my_temperature.Takes_A_Value_Of(100.0); // Valid
        
        //my_temperature.Takes_A_Value_Of(-20000.0);
        // Program throws runtime TemperatureValueLessThanLowerLimitException
        
        my_temperature.Takes_A_Unit_And_A_Value_Of(the_temperature_unit, 0.0); // Valid
        
        my_temperature.Takes_A_Unit_And_A_Value_Of(the_temperature_unit, 0.0); // Valid
        
        //my_temperature.Takes_A_Unit_And_A_Value_Of(new A_Temperature_Unit(kelvin), 0.0);
        // Eclipse throws compile-time error "kelvin cannot be resolved to a variable".
        
        //my_temperature.Takes_A_Unit_And_A_Value_Of(the_temperature_unit, -302.00);
        // Program throws runtime TemperatureValueLessThanLowerLimitException.
        
    }
}
