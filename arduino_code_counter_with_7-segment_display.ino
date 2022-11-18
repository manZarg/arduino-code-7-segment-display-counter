// digital pin 2 has a pushbutton attached to it. Give it a name:
int toggle = 2;
int count;
int counter;
int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(toggle, INPUT);
  count = 0;
  counter = 0;
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
        
  // read the input pin:
  int toggleState = digitalRead(toggle); //for toggle switch

//to display zero into segment
    if(count == 0){
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, LOW);
    }
    
  if(toggleState == 1){
    count++;
    Serial.println(count);
    delay(500);
        
     if(count % 2 == 0){
      counter++;
      Serial.println(counter);

      if(counter == 1){
        digitalWrite(a, LOW);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
      }
      
      if(counter == 2){
        digitalWrite(c, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, LOW);
      }
      
      if(counter == 3){
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
      }

      if(counter == 4){
        digitalWrite(a, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
      }

      if(counter == 5){
        digitalWrite(b, LOW);
        digitalWrite(e, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
      }

      if(counter == 6){
        digitalWrite(b, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(g, HIGH);
      }

      if(counter == 7){
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
      }

      if(counter == 8){
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
      }

      if(counter >= 9){
        digitalWrite(e, LOW);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
      }
    }
  } //end of toggle switch code
  delay(1);        // delay in between reads for stability
  
}
