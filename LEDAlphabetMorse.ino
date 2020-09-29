1//************************************************************************************************

//Description: This program blinks out anything you want in morse code on the Arduino's built-in LED
 
//Version: 1.0
 
//Author: Blake Branvold 

//Date: 1/17/19

//************************************************************************************************


// the setup function runs once when you press reset or power the board

 int ledPin = 3;
 int ledPin2 = 6;
 int timeUnit = 100;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}






// the loop function runs over and over again forever
void loop() {  
  wordEater("hello world");
  //railroadLights();
}

void railroadLights(){
  digitalWrite(ledPin, HIGH);
  delay(timeUnit);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(timeUnit);
  digitalWrite(ledPin2, LOW);
}

void dit(){ //Morse code Dit
   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnit);            //keep LED on         
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnit*3);           //keep LED off
}

void space(){ //Don't do anything for 10 time units, used for spaces between letters
  delay(timeUnit*10);
}

void dot(){
   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnit*3);           //keep LED on          
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnit*3);           //keep LED off
}

void a(){
  dit();
  dot();
  space();
}
void b(){
  dot();
  dit();
  dit();
  dit();
  space();
}
void c(){
  dot();
  dit();
  dot();
  dit();
  space();
}
void d(){
  dot();
  dit();
  dit();
  space();
}
void e(){
  dit();
  space();
}
void f(){
  dit();
  dit();
  dot();
  dit();
  space();
}
void g(){
  dot();
  dot();
  dit();
  space();
}
void h(){
  dit();
  dit();
  dit();
  dit();
  space();
}
void i(){
  dit();
  dit();
  space();
}
void j(){
  dit();
  dot();
  dot();
  dot();
  space();
}
void k(){
  dot();
  dit();
  dot();
  space();
}
void l(){
  dit();
  dot();
  dit();
  dit();
  space();
}
void m(){
  dot();
  dot();
  space();
}
void n(){
  dot();
  dit();
  space();
}
void o(){
  dot();
  dot();
  dot();
  space();
}
void p(){
  dit();
  dot();
  dot();
  dit();
  space();
}
void q(){
  dot();
  dot();
  dit();
  dot();
  space();
  
}
void r(){
  dit();
  dot();
  dit();
  space();
}
void s(){
  dit();
  dit();
  dit();
  space();
}
void t(){
  dot();
  space();
}
void u(){
  dit();
  dit();
  dot();
  space();
}
void v(){
  dit();
  dit();
  dit();
  dot();
  space();
}
void w(){
  dit();
  dot();
  dot();
  space();
}
void x(){
  dot();
  dit();
  dit();
  dot();
  space();
}
void y(){
  dot();
  dit();
  dot();
  dot();
  space();
}
void z(){
  dot();
  dot();
  dit();
  dit();
  space();
}
//needs to be a Switch
void wordEater(char str[]){
  for (int in = 0; str[in] != '\0'; in++){
    char ch = str[in];
    if (ch == a){
      a();
    } else if (ch == 'b'){
      b();
    } else if (ch == 'c'){
      c();
    } else if (ch == 'd'){
      d();
    } else if (ch == 'e'){
      e();
    } else if (ch == 'f'){
      f();
    } else if (ch == 'g'){
      g();
    } else if (ch == 'h'){
      h();
    } else if (ch == 'i'){
      i();
    } else if (ch == 'j'){
      j();
    } else if (ch == 'k'){
      k();
    } else if (ch == 'l'){
      l();
    } else if (ch == 'm'){
      m();
    } else if (ch == 'n'){
      n();
    } else if (ch == 'o'){
      o();
    } else if (ch == 'p'){
      p();
    } else if (ch == 'q'){
      q();
    } else if (ch == 'r'){
      r();
    } else if (ch == 's'){
      s();
    } else if (ch == 't'){
      t();
    } else if (ch == 'u'){
      u();
    } else if (ch == 'v'){
      v();
    } else if (ch == 'w'){
      w();
    } else if (ch == 'x'){
      x();
    } else if (ch == 'y'){
      y();
    } else if (ch == 'z'){
      z();
    } else if (ch == ' '){
      space();
    }
  }
}
