#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "Relay.h"

Relay::Relay(unsigned int pin, unsigned int state, unsigned int mode) : _pin(pin), _mode(HIGH == mode ? HIGH : LOW)
{
	pinMode(pin, OUTPUT);
	this->setState(state);
}

void Relay::on(void)
{
	this->setState(ON);
}

void Relay::off(void)
{
	this->setState(OFF);
}

void Relay::toggle(void)
{
	this->setState(HIGH ^ this->_state);
}

unsigned int Relay::getState(void)
{
	return this->_state;
}

void Relay::setState(unsigned int state)
{
	if (this->_state != state) 
	{
		this->_state = (OFF == state ? OFF : ON);
		digitalWrite(this->_pin, (HIGH ^ this->_mode) ^ this->_state);
	}
}

boolean Relay::isOn(void)
{
	return (ON == this->getState());
}

boolean Relay::isOff(void)
{
	return (OFF == this->getState());
}

