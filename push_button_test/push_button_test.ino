int pushButton = 2;
int prevState = digitalRead(pushButton);
uint8_t draw_state = 0;

void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

   // read the input pin:
   
  int buttonState = digitalRead(pushButton);
  if (buttonState != prevState){
    draw_state ++;
  }
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}
