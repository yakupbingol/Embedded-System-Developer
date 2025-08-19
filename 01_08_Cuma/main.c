/*
5. rastgele olarak 8'ledi toggle yapan kod yazýnýz.
500ms aralýklarla
L1 L2 L3 L4 L5 L6 L7 L8
0        0 0         0        0  0 0          0
0        0 0         1        0  0 0          0
0        0 0         1        0  0 1          0
0        1 0         1        0  0 1          0: 2 - 6 arasý  A portu                2 - 3 - 4 - 5
Dihital pin : 6 - 10 arasý B portu                        6 - 7 - 8 - 9
Dijital Pin : 10 - 14 arasý  C  portu
Dijital Pin : 14 - 18 arasý  D portu þeklinde modelle

yazacaðýnýz fonksiyon, tüm portu ya giriþ ya da çýkýþ yapsýn

2. fonksiyon komple o portun pinlerini ON ya da OFF yapsýn.

*/


#include<stdio.h>
int main() {
}
/*
	#define PORTA 0   //2 3 4 5
#define PORTB 1   //6 7 8 9
#define PORTC 2   //10 11 12 13
#define PORTD 3   //14 15 16 17
#define BUZZER 7


void setPortMode(int portX, int mode){
  for (int pinNo = 2 + 4                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       * portX; pinNo < (2 + (portX + 1)* 4); ++pinNo)
      pinMode(pinNo,mode);
}

void writePort(int portX, int portState){
  for (int pinNo = 2 + 4 * portX; pinNo < (2 + (portX + 1)* 4); ++pinNo)
      digitalWrite(pinNo,portState);
}

void GPIO_WritePin(int portX, int pinIndex, int state) {
  int pinNumber = 2 + (4 * portX) + pinIndex;  
  digitalWrite(pinNumber, state);
}
bool isPrime(int number) {
  if (number < 2) return false;
  for (int i = 2; i <= number / 2; i++) {
    if (number % i == 0)
      return false;
  }
  return true;
}
void setup() {
  /*
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

*/
//pinleri low yapiyor


setPortMode(PORTB, OUTPUT);
writePort(PORTC, LOW);

// buzzer pini
pinMode(7, OUTPUT);

digitalWrite(7, LOW);


}
void loop() {
    GPIO_WritePin(PORTB, 2, HIGH);
    delay(500);
    GPIO_WritePin(PORTB, 2, LOW);
    delay(500);


    int selectedPin = random(8, 14);

    digitalWrite(selectedPin, HIGH);
    if (isPrime(selectedPin)) {
        digitalWrite(7, HIGH);
    }
    else {
        digitalWrite(7, LOW);
    }

    delay(1000);
    digitalWrite(selectedPin, LOW);

    for (int i = 8; i <= 13;i++) {
        // digitalWrite(i,HIGH);
        // delay(1000);
         //digitalWrite(i,LOW);

    }
    for (int i = 12; i > 8; i--) {
        // digitalWrite(i,HIGH);
         //delay(1000);
        // digitalWrite(i,LOW);
    }
    /*
     writePort(PORTA,HIGH);
     delay(500);
     writePort(PORTA,LOW);
     delay(500);
     writePort(PORTB,HIGH);
     delay(500);
     writePort(PORTB,LOW);
     delay(500);
     writePort(PORTC,HIGH);
     delay(500);
     writePort(PORTC,LOW);
     delay(500);
     */
}

*/