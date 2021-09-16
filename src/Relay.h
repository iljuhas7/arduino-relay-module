#ifndef RELAY_H
#define RELAY_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Relay
{
	public:
		static const unsigned int ON = 1;
		static const unsigned int OFF = 0;

		Relay(
				unsigned int pin = LED_BUILTIN,
				unsigned int state = OFF,
				unsigned int mode = HIGH
			);

		void on();
		void off();
		void toggle();
		boolean isOn();
		boolean isOff();

		unsigned int getState();
		void setState(unsigned int state);                        

	protected:
		unsigned int _mode;                    
		unsigned int _state;                   
		unsigned int _pin;                     
};

#endif

