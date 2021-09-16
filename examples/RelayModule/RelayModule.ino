#include <Relay.h>

Relay Speaker = Relay(1);
Relay Lamp    = Relay(2);
Relay Heater  = Relay(3);
Relay Fan     = Relay(4);

void setup() 
{
	Speaker.on();
}

void loop() 
{
	Lamp.toggle();

	if (Lamp.isOn()) 
	{
		Heater.toggle();
	} 
	else 
	{
		an.setState(Heater.getState());
	}
	
	delay(1000);
}
