#include <RelayModule.h>

#define RELAY_PIN   1
#define DELAY_TIME  1000

RelayModule* relay = NULL;

void setup() 
{
	relay = new RelayModule(RELAY_PIN);
}

void loop() 
{
	if (relay->isOn()) 
	{
		relay->off();
		relay->on();
	}
	
	delay(DELAY_TIME);
}

