#ifndef RELAY_MODULE_H
#define RELAY_MODULE_H

#if defined(ARDUINO) && (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#define RELAY_DEFAULT_INVERT_SIGNAL false

class RelayModule final
{
	private:
		int IN_pin;
		int onSignal = LOW;
		int offSignal = HIGH;

	public:
		RelayModule(
			int IN_pin,
			boolean invertSignal = RELAY_DEFAULT_INVERT_SIGNAL
		);

		~RelayModule();
		
		void on();
		void off();
		void setState(boolean input);
		
		boolean isOn();
		boolean isOff();
		
		void invert();

	private:
		inline void turnOn();
		inline void turnOff();
		inline void write(int signal);
		inline int read();
};

#endif
