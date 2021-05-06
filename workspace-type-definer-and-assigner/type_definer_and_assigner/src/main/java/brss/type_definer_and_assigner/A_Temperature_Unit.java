package brss.type_definer_and_assigner;

public class A_Temperature_Unit {

	private A_Temperature_Scale the_temperature_scale;
	
	public A_Temperature_Unit(A_Temperature_Scale the_temperature_scale_to_use) {
		
		this.the_temperature_scale = the_temperature_scale_to_use;
		
	}
	
	public A_Temperature_Scale The_Temperature_Scale() {
		
		return this.the_temperature_scale;
		
	}
	
}
