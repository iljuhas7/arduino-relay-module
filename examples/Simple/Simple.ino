Relay Lamp = Relay();

void setup()
{
	Serial.begin(9600);
}

void loop() 
{
	Lamp.toggle();

	Serial.print("The lamp is ");
	Serial.println(Lamp.isOn() ? "on." : "off.");

	delay(1000);
}
