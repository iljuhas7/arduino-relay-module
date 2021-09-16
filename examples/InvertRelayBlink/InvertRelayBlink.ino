#include <RelayModule.h>

#define RELAY_PIN   1
#define DELAY_TIME  1000
#define INVERT_RELAY true

RelayModule* relay;

void setup() 
{
	relay = new RelayModule(RELAY_PIN, INVERT_RELAY);
}

void loop() 
{
	if (relay->isOn()) 
	{
		relay->off(); 
	} 
	else if (relay->isOff()) 
	{
		relay->on(); 
	}
	
	delay(DELAY_TIME); 
}

