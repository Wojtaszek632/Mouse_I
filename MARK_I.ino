#define echo 9
#define trig 10
// left motor: D6 enable2  imput 3 pin D2 and imput 4 pin D3  
// right motor: D4 enable1  imput 1 pin D7 and imput 2 pin D8  

void setup() {
pinMode (echo, INPUT);
pinMode (trig, OUTPUT);


pinMode (6, OUTPUT);//enable left always on
digitalWrite (6,HIGH);

pinMode (4, OUTPUT);//enable right always on
digitalWrite (4,HIGH);

pinMode (2, OUTPUT);// input  left
pinMode (3, OUTPUT);// input  left
pinMode (7, OUTPUT);//input right
pinMode (8, OUTPUT);//input right
pinMode (13, INPUT_PULLUP);
}

void loop() 
{
if (distance()>20){
forward();
}
else if (distance()<20&&distance()>2){
backward();
}

else //Stop{
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
}
}

int distance()
{
long measurement;
long calc;

digitalWrite (trig,LOW);
delayMicroseconds (2);
digitalWrite (trig,HIGH);
delayMicroseconds (10);
digitalWrite (trig,LOW);

measurement=pulseIn(echo,HIGH);
calc=measurement/58; //convert to cm

return calc;
}

void forward (){
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay (300);
}
void backward ()
{
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
delay (500);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay (400);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);

}
