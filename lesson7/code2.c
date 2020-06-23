volatile int pinInterrupt = 2; 
volatile byte n= 0 ;
void onChange ()
if (_ digita1Read (pinInterrupt) == LOW )
Serial.println("Key Down") ;
else
Serial.println("Key UE");
}
void setup ()
pinMode (IN1, OUTPUT);
pinMode (IN2£¬outPUT);
pinMode (IN3£¬ouTPUT);
pinMode (IN4£¬outPUT);
pinMode(S1£¬ouTPuI);
pinMode (LT, OUTPUT);
pinMode (BT, OUTPUT);
digitalWrite (IT, HIGH);
digita1Write (BT, HIGH) ;
digitalWrite (S1, HIGH) ;
Serial .begin(9600); 
pinMode ( pinInterrupt, INPUT);
attachInterrupt( digita1PinToInterrupt (pinInterrupt), onChange, CHANGE) ;
}
