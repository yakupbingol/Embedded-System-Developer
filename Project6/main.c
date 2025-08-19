/*
Yazýnýn uzunlugunu bulan kodu yazýnýz
fonksiyonla degil.

2. Bir yazýyý tersine çeviren
programý yazýnýz
SAMET ---> TEMAS


3. Bir yazýnýn sonuna X karakteri ekleyen programý yazýnýz
Onur ---> OnurX

Soru4: Kullanýcýdan bir isim ve ardýndan o isimde aranacak
o karakter alacak o karakterden kaçtane var ona bakacak?

Soru5: iki yazývar 1. yazýnýn sonuna 2. yazýyý ekleyen program
str1 = "Serdar"
str2= "Ortaç"

str1=" SerdarOrtaç"

Soru6: Serdar Ortaç þeklinde yapýn

Soru7: Bir yazý palindrom mu ona baksýn
Eda Ece (palindrom) SAMET --> TEMAS


sORU8: Bir cümle alýn ve bu cümledeki kelime sayisini bulun.
Soru8.1: Soru8'deki sorunu çözünüz.Boþluk problemini çözünüz
merve yilmaz 2 sözcüktür.

soru9: ad ve soyad kaç karakterse ona göre yildizý ayarlayýn

abdullah halit soru2 'de ve 3'de girilen giridinin önemi yok
her zaman büyük yapacak.
---- // Samet Akcalar S**** A****** -------

Soru10'de ismin uzunlugunun önemi yok
S** A**



ctpye kütüphanesne göz atýnýz.Eger gerekli gördügünüz noktalar varsa kullanýn.


Soru11
Bir yazýnýn içinde kaçtane sesli harf var bunun toplamýný bulan program


Soru12:
Mülakat Sorusu
Bir yazýnýn içinde her karakterden kaçtane var A,B,,C ...Z 'ye kadar kaç karakter var bunu
bulan programý yazýnýz. Büyük küçük harf ayrýmý yapmasýn.
Bir cumle olsun.

A --->0
B---1
c-->0
d-->0

l-->
u-->



*/

#define ASIZE(x) sizeof(x)/sizeof(x[0])
#include <stdio.h>
#include <ctype.h>  // toupper, isspace


/*
 //Soru1
int main() {

    char str[] = "abcdef g hklmno";
    int temp;
    for (int i = 0; i < ASIZE(str);i++) {
        temp = i;
    }
    printf("Yazinin uzunlugu:%d", temp);

}
*/

/*
//Soru2
int main() {
    char str[]="Embedded";
    for(int i=ASIZE(str)-1;i>=0;i--) {
        printf("%c",str[i]);
    }
}
*/


/*
//Soru3
int main() {
    char str[]="Embedded";

    for(int i=0;i<ASIZE(str);i++) {
        printf("%c",str[i]);
        if (i == ASIZE(str)-1) {
            str[i]='X';
        }
    }
    printf("%s",str);
}
*/



/*
//Soru4
int main() {
    char str[50];
    char search;
    int temp = 0;

    printf("Isim gir:");
    scanf("%s", str);

    printf("Aranacak harfi gir:");
    scanf(" %c", &search);

    for (int i = 0; i < ASIZE(str); i++) {
        if (str[i] == search) {
            temp++;
        }
    }
    printf("'%c' harfinden %d tane var.\n", search, temp);
}
*/



/*
//Soru8
int main() {
    char str[100];
    int temp=0;
    gets(str);
    for (int i = 0;  str[i] != '\0'; i++) {
        if (str[i] == ' ')
            temp++;
    }
    printf("%d\n", temp+1);
}
*/

/*//Soru8.1
int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    int wordCount = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i + 1] == '\0')
        {
            if (sentence[i + 1] != ' ')
            {
                wordCount++;
            }
        }
    }
    printf("%d", wordCount);
}
*/


/*
//Soru 9
int main() {
char name[100] = "Yakup  Bingol";
char surname[100];
if(isalpha(name[0]))
surname[0] = name[0];
int i = 0;
while(name[++i] != '\0') {
if(isspace(name[i - 1]) && isalpha(name[i]) || isspace(name[i]))
surname[i] = name[i];
else
surname[i] = '*';
}
surname[i] = '\0';
printf("%s\n", surname);
}
*/

int main() {
    int x = 25; if (10 < x < 20) { printf("Kosul dogru\n"); }
    else { printf("Kosul yanlis\n"); } return 0;
}


/*
 //Soru12
int main() {
    char str[100]="bu bir test mesajidir.";

    int temp=0;

    for (int i=0;str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            temp++;
        }
    }
    printf("%d",temp);

}
*/