
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // this is a baud rate the higher the number the better. It is the speed at which your board communicates.
Serial.println("New Data Run");
Serial.println("Distance,Voltage");
Serial.println("RESETTIMER");
}

void loop() {
  // put your main code here, to run repeatedly:     
  Serial.print(abs(((((analogRead(A0)*5.0)/1023.0))*.0076)-.038),3); // this reads the analog output of the potentiometer. Then converts it to voltage and then to cm 
  Serial.print("m,");
  Serial.print(((analogRead(A5)*5.0)/1023.0),2); //this reads the analog output of the force transducer. Then converts it to voltage.
  Serial.print("V "); 
  Serial.println(" ");// This ensures that we skip a line between data.
  delay(100);

}
