void setup()
{
 //you can use 13 instead  LED_BUILTIN because LED_BUILTIN' s default value is 13.
pinMode(LED_BUILTIN,OUTPUT);
}
void loop()
{
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
digitalWrite(LED_BUILTIN,LOW);
delay(1000);  
}
