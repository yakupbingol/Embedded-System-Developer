/*
	TIMERLAR
	Belirli bir isi belirli bir zaman dogrultusunda yapmak veya belirli bir zamani olcmek icin timerlar kullanilir
	Timerlar CPU'dan islemciden bagimsiz olarak arka tarafta calisirlar
	
	Belirli bir olayi belirli bir zamanda yaptirmak
	Zaman olcmek icin	Timerlar kullanilir

*/

/*
Non-blocking mode
Bu kütüphaneyi kullanarak 1500 ms'de ledi toggle yapan kodu kullanınız.
(Tek timer)


Soru2: 2 farklı timer kullanarak birtanesi led1 300 ms aralıklarla yaksın
led2 700 ms aralıklarla yaksın

Soru3: İstediğiniz kadar timer kullanabilrisiniz
3 farklı lediniz var
birinci led 300 ms de bir
ikinci led 600 msde bir
üçüncü led 900 ms'de bir toggle edilmesi gerekiyor
bu taskı yapacaksınız

*/









/*

//Soru1
#include <TimerOne.h>

#define LED_PIN 13
volatile bool ledState = LOW;

void setup(){
  pinMode(LED_PIN, OUTPUT);
  Timer1.initialize(100000);  // 1 ms periyot
  Timer1.attachInterrupt(timerISR);

}

void loop(){
}

void timerISR(){
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState);
}

*/

/*
//Soru2

#include <TimerOne.h>

#define LED1 13
#define LED2 12

volatile unsigned long counter = 0;
volatile bool led1State = LOW;
volatile bool led2State = LOW;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // Timer1 → 100 ms aralıklarla interrupt
  Timer1.initialize(300000);   // 100 ms
  Timer1.attachInterrupt(timerISR);
}

void loop() {
  // boş, tüm iş timer kesmesinde
}

void timerISR() {
  counter++;

  // LED1: 300 ms’de bir toggle
  if (counter % 3 == 0) {      // 3 * 100 ms = 300 ms
    led1State = !led1State;
    digitalWrite(LED1, led1State);
  }

  // LED2: 700 ms’de bir toggle
  if (counter % 7 == 0) {      // 7 * 100 ms = 700 ms
    led2State = !led2State;
    digitalWrite(LED2, led2State);
  }

  // counter çok büyümesin diye sıfırla
  if (counter >= 2100) counter = 0; // 2100*100ms = 210s’de bir reset
}

*/

/*
#include <TimerOne.h>

#define LED1 13
#define LED2 12
#define LED3 11

volatile bool led1State = LOW;
volatile bool led2State = LOW;
volatile bool led3State = LOW;

volatile unsigned int count = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // Timer1'i 1 ms periyotla başlat
  Timer1.initialize(1000);  // 1000 mikro saniye = 1 ms
  Timer1.attachInterrupt(timerISR);
}

void loop() {

}

void timerISR() {
  count++;  // her 1 ms'de bir artar

  // LED1: 300 ms
  if (count % 300 == 0) {
    led1State = !led1State;
    digitalWrite(LED1, led1State);
  }

  // LED2: 600 ms
  if (count % 600 == 0) {
    led2State = !led2State;
    digitalWrite(LED2, led2State);
  }

  // LED3: 900 ms
  if (count % 900 == 0) {
    led3State = !led3State;
    digitalWrite(LED3, led3State);
  }

  // Taşmayı önlemek için sayacı sıfırla
  if (count >= 900) count = 0;
}




*/




















