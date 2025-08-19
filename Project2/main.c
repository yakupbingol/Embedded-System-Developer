/*
 Soru 1
 Iki dizi var a dizisini b dizisine ters atayan programi yaziniz
 int a[5] = {2,4,6,8,10};
 int b[5] = {10,8,6,4,2};

 Soru2
 dizinin elemanlarini bir one kaydiran ve dizinin ilk elemanini sonuna atayan programi yaziniz
 int a[5]= {2,4,6,8,10}
 cikti 4,6,8,10,2

 Soru 3
 a ve b dizileri var a dizisindeki tek sayilari b dizisinin basina, cift sayilari b dizisinin sonuna atayan programi yaziniz
 a[]={4,8,3,1,18,0,21,20,5,17}
 cikti b[]={3,1,9,21,5,17,4,8,18,20}

 Soru 4
 Bir dizide ki en buyuk ve en kucuk elemani TEK BIR DONGU DEYIMIYLE BULAN programi yazin

 Soru 5
 Dizide ki en kucuk elemani bulup en basa geciren programi yaziniz

 Soru 6
 Selection Sort siralamasiyla diziyi siralayiniz


 Soru 7
 Dizideki her elemani kendisi kadar yazdiran programi yaziniz
 Ornek 4 3 5 1 2
       4444 333 55555 1 22

 Soru 8
 Dizide ki her elemani indis numarasi kadar yazdiran program
 Ornek 4 3 5 1 2
         3 55 111 2222


 */
#define ASIZE(x) sizeof(x)/sizeof(x[0])
#include <stdio.h>
 //Soru 8
int main() {
    //0, 1, 2, 3, 4, 5
    int a[6] = { 2, 3, 1, 4, 5, 7 };
    for (int i = 0; i < ASIZE(a); i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", a[i]);
        }
    }
}

/*
 //Soru 7
 int main() {
 int a[5] = {2, 3, 1, 4,5 };

 for (int i=0; i<ASIZE(a); i++) {
   for (int j=0; j<a[i]; j++) {
    printf("%d ", a[i]);
   }
 }
}*/

/*
 //Soru 6
 int main() {
 int a[] = {4, 8, 3, 1, 18, 2, 21, 33, 5, 17};
 int temp;

 for (int i = 0; i < 10; i++) {
  for (int j = i+ 1; j < 10; j++) {
   if (a[j] < a[i]) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 for (int i = 0; i < 10; i++) {
  printf("%d ", a[i]);
 }
}*/


/*Soru5
int main() {
 int a[] = {4, 8, 3, 1, 18, 3, 21, 33, 5, 17};
 int index = 0;

 for (int i =0; i<10; i++) {
  if (a[index] > a[i])
   index = i;
  if (index != 0) {
   int temp = a[0];
   a[0] = a[index];
   a[index] = temp;
  }

 }
 for (int i =0; i<10; i++) {
  printf("%d ", a[i]);
 }
}*/


/*
//Soru4
int main() {
 int a[] = {4, 8, 3, 1, 18, 3, 21, 33, 5, 17};
 int enBuyuk= a[0];
 int enKucuk = a[0];


 for (int i=1;i<10;i++) {
  if (enBuyuk < a[i])
   enBuyuk = a[i];
  if (enKucuk > a[i])
   enKucuk = a[i];
 }
 printf("%d ",enBuyuk);
 printf("%d ",enKucuk);
}
*/

/*
#define ARRAY_SIZE 10
//Soru3
int main() {
 int a[] = {4, 8, 3, 1, 18, 0, 21, 20, 5, 17};
 int b[10];
 int temp = 0;
 int end = ARRAY_SIZE / 2;

 for (int i = 0; i < 10; i++) {
  if (a[i] % 2 == 1) {
   b[temp] = a[i];
   temp++;
  } else {
   b[end] = a[i];
   end++;
  }
 }
 for (int i = 0; i < 10; i++) {
  printf("%d ", b[i]);
 }

}
*/


/*#define ARRAY_SIZE 5
//Soru2
int main(void) {

 int a[5] = {2, 4, 6, 8, 10};
 int temp = a[0];
 for (int i = 0; i < ARRAY_SIZE-1; i++) {
  a[i] = a[i + 1];
 }
 a[ARRAY_SIZE-1] = temp;

 for (int i = 0; i < ARRAY_SIZE; i++) {
  printf("%d ", a[i]);
 }
}*/

/*//Soru1
#define ARRAY_SIZE   5
 int main(void) {
 int temp;
 int a [ARRAY_SIZE] = {2,4,6,8,10};
 int b [ARRAY_SIZE];

 for (int i =ARRAY_SIZE-1;0<=i;i--) {
  /*temp = a[i];
  b[i] = temp;#1#
  b[i] = a[i];
  printf("%d ",b[i]);
 }

}*/
