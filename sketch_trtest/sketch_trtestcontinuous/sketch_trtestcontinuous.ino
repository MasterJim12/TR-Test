void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // this is a baud rate the higher the number the better. It is the speed at which your board communicates.
Serial.println("New Data Run");
Serial.println("Distance, Voltage, LbF");
Serial.println("RESET_TIMER");
}

void loop() {
  Serial.print((abs(analogRead(A0)*5.0)/1023.0),3);
  Serial.print("v, ");
  Serial.print(abs(((((analogRead(A0)*5.0)/1023.0))*.0076)-.038)/0.001,3); // this reads the analog output of the potentiometer. Then converts it to voltage and then to m 
  Serial.print("mm,");
  
  Serial.print(((analogRead(A3)*5.0)/1023.0),4); //this reads the analog output of the force transducer. Then converts it to voltage. This is then saved as variable voltage. 
  Serial.print("V, ");                           //This just adds units for understanding.
  
  Serial.print (((77.02*(((analogRead(A3)*5.0)/1023.0)))+.478));        //This converts our voltage into LbF
  
  Serial.print("LbF");
 
  Serial.println(" ");// This ensures that we skip a line between data.
 
  delay(1000);
  

}
