/*
Yaz�n�n uzunlugunu bulan kodu yaz�n�z
fonksiyonla degil.

2. Bir yaz�y� tersine �eviren
program� yaz�n�z
SAMET ---> TEMAS


3. Bir yaz�n�n sonuna X karakteri ekleyen program� yaz�n�z
Onur ---> OnurX

Soru4: Kullan�c�dan bir isim ve ard�ndan o isimde aranacak
o karakter alacak o karakterden ka�tane var ona bakacak?

Soru5: iki yaz�var 1. yaz�n�n sonuna 2. yaz�y� ekleyen program
str1 = "Serdar"
str2= "Orta�"

str1=" SerdarOrta�"

Soru6: Serdar Orta� �eklinde yap�n

Soru7: Bir yaz� palindrom mu ona baks�n
Eda Ece (palindrom) SAMET --> TEMAS


sORU8: Bir c�mle al�n ve bu c�mledeki kelime sayisini bulun.
Soru8.1: Soru8'deki sorunu ��z�n�z.Bo�luk problemini ��z�n�z
merve yilmaz 2 s�zc�kt�r.

soru9: ad ve soyad ka� karakterse ona g�re yildiz� ayarlay�n

abdullah halit soru2 'de ve 3'de girilen giridinin �nemi yok
her zaman b�y�k yapacak.
---- // Samet Akcalar S**** A****** -------

Soru10'de ismin uzunlugunun �nemi yok
S** A**



ctpye k�t�phanesne g�z at�n�z.Eger gerekli g�rd�g�n�z noktalar varsa kullan�n.


Soru11
Bir yaz�n�n i�inde ka�tane sesli harf var bunun toplam�n� bulan program


Soru12:
M�lakat Sorusu
Bir yaz�n�n i�inde her karakterden ka�tane var A,B,,C ...Z 'ye kadar ka� karakter var bunu
bulan program� yaz�n�z. B�y�k k���k harf ayr�m� yapmas�n.
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