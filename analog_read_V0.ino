// Read and print all Analog Input of Arduino
// Pin: 54 to 69 for Arduino Mega 2560
int a_pin1 ; // Define the analog input pin (A0 in this case)
int ar_pin1;
String data;

void setup() {

  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {

   if(Serial.available() > 0)//check to see if we are connected
   // Just put 54 and then press enter
  {
  data = Serial.readStringUntil('\n');//reads string and store it in data
 
  a_pin1=data.toInt();

  Serial.println("Analog Value for: ");
  Serial.println(a_pin1);
  Serial.println("");
  
  for (int i=0; i<16; i++) {
  pinMode(a_pin1, INPUT);
  ar_pin1 = analogRead(a_pin1); // Read the analog input value (0-255, 0-1023)
  Serial.println(ar_pin1);
  a_pin1++;
    };
  Serial.println("Finish");

}}
