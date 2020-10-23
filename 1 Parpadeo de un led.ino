/*
Autor: Eduardo Velez Moreno
Creado el 22/10/2020
*/
void setup() {
  DDRC |= 0x04; //Se configura el pin numero 2 del puerto c como una salida
}
void loop() {
  PORTC |= 0x04; // Salida digital en HIGH
  delay(300);
  PORTC &= 0xFB; // Salida digital en LOW
  delay(300);
}
