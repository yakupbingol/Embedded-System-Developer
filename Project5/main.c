/*
Soru1: Faktöryel hesaplayan fonksiyon yazýnýz.Çözüm recursive fonksiyonlarla olsun.
Soru2:Ebob hesaplayan fonksiyon yazýnýz.


soru3: Butona basýldýkçana sayan 7 segment displayý yazýnýz
0.. dan 9 kadar saysýn.,9 dan sonra tekrar 0 a dönsün ..9 kadar saymaya devam
etsin






*/



#include <stdio.h>


/*
//Soru3
int segments[10][7] = {
{1,1,1,1,1,1,0}, // 0
{0,1,1,0,0,0,0}, // 1
{1,1,0,1,1,0,1}, // 2
{1,1,1,1,0,0,1}, // 3
{0,1,1,0,0,1,1}, // 4
{1,0,1,1,0,1,1}, // 5
{1,0,1,1,1,1,1}, // 6
{1,1,1,0,0,0,0}, // 7
{1,1,1,1,1,1,1}, // 8
{1,1,1,1,0,1,1} // 9
};

int Pins[7] = {7,8,9,10,11,12,13};
int lastState = HIGH;
#define BUTTONPIN 6

int i = 0;


void setup() {
  for (int j = 0; j < 7; j++) {
    pinMode(Pins[j], OUTPUT);
  }
    pinMode(BUTTONPIN, INPUT_PULLUP);
  }

void loop() {
  int currentState = digitalRead(BUTTONPIN);

  if (lastState == LOW && currentState == HIGH) {
    for (int j = 0; j < 7; j++) {
      digitalWrite(Pins[j], LOW);
  }
  delay(50);

  for (int j = 0; j < 7; j++) {
    digitalWrite(Pins[j], segments[i][j]);
  }

  i++;
  if (i > 9) i = 0;
  }

  lastState = currentState;
}

*/

/*
//Soru2
int ebob(int x, int y) {
    int temp = 1;
    for (int i = 1; i <= x && i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            temp = i;
        }
    }
    return temp;
}

int main() {
    printf("Ebob = %d\n", ebob(10, 15));
    return 0;
}
*/




/*
//Soru 1
int recursiveFak(int n) {
	int sum;
	if (n == 0)
		return 1;
	else
		return n * recursiveFak(n - 1);

}


int main() {
	printf("faktoriyel: %d ", recursiveFak(4));
}
*/
