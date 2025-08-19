/*
switch case
    else if merdiveniyle her sey yapilabiliyor.
    bazi noktalarda kod yazma kod okuma kolayligi saglamasi (s-case)
    Her switch deyimi icin bir else if yazilabilir ama her else if icin bir switch deyimi yazilamaz.
    switch(integer_exp){
        case labellar:
        }

        Type Conversion(Tur Donusumu)
        type conversion: bir veri tipinin baska bir veri tipine donusturulmesine type conversion denir.

        type conversion
        implict type conversion
        derleyiciye talimat vermiyoruz.Derleyici dilin kurallarina gore bu donusumu otomatik olarak yapar
        1.Basit aritmetik islemlerde type conversion otomatik olarak yapilir
        +,-,<, cv operastorlerde
        2.Atama operatorlerinde otomatik tur donusumu olur.
        3.fonksiyon cagrilari
        void foo(int x);
        foo(15.3)

        explict type conversion
        Kod yazarak yapilan tur donusumlerine denir. Bizim talimat vererek yaptigimiz donusum
        type cast operatoru kullaniyoruz.

        Note: Tur donusumu yapildigi icin ya da tur donusum yapilmadigi icin
        veri kaybedebiliriz.Bu yuzden bu konun anlasilmasi onemli
        Gerçel Sayi Türleri

        long double
        doube
        float

        unsigned long long
        signed long long
        unsigned long
        signed long long
        unsigned int
        signed int int
    ----------------------------------
        unsigned short
        signed short
        unsigned char
        signed char

        Integral Promotion
        Binary operatörlerin biri ya da her ikisi int altý
        türler ise onlar otomatik olarak inte yükseltilir.
        C ve C++'da hiç bir þekilde bir iþlemin int altý türe göre yapýlmasý söz konusu degil

*/



#include <stdio.h>
#define ONLISANS 1
#define LISANS 2
#define YUKSEK_LISANS 3

// Faculty
#define FAK_NONE 0
#define FAKULTE_DIS 1
#define FAKULTE_ECZACILIK 2
#define FAKULTE_VETERINER 3
#define FAKULTE_TIP 4
#define FAKULTE_DIGER 5

void sinifSecimiYazdir(int egitimSeviyesi, int fakulte, int sinif);

int main() {


    // kaçtane test edilmesi gereken durum var ?


    int egitimSeviyesi;
    int fakulte = FAK_NONE;
    int sinif;

    printf("Eðitim seviyenizi seçin:\n");
    printf("%d - onlisans\n", ONLISANS);
    printf("%d - Lisans\n", LISANS);
    printf("%d - Yuksek Lisans\n", YUKSEK_LISANS);
    printf("Seciminiz: ");
    scanf("%d", &egitimSeviyesi);

    // Lisans ise fakülte seçimi
    if (egitimSeviyesi == LISANS) {
        printf("Fakulte seciniz:\n");
        printf("%d - Dis Hekimligi\n", FAKULTE_DIS);
        printf("%d - Eczacilik\n", FAKULTE_ECZACILIK);
        printf("%d - Veteriner\n", FAKULTE_VETERINER);
        printf("%d - Tip\n", FAKULTE_TIP);
        printf("%d - Diger\n", FAKULTE_DIGER);
        printf("Seciminiz: ");
        scanf("%d", &fakulte);
    }

    sinifSecimiYazdir(egitimSeviyesi, fakulte, 0);

    printf("Sinif numaranizi giriniz: ");
    scanf("%d", &sinif);

    printf("\n----------------------------\n");
    printf("Egitim Seviyesi: %d\n", egitimSeviyesi);
    printf("Fakulte: %d\n", fakulte);
    printf("Sinif: %d\n", sinif);
    printf("----------------------------\n");

    return 0;
}

// Sýnýf aralýklarýný yazdýran fonksiyon
void sinifSecimiYazdir(int egitimSeviyesi, int fakulte, int sinif) {
    switch (egitimSeviyesi) {
    case ONLISANS:
        printf("Sinif seciniz: 1-2\n");
        break;
    case LISANS:
        switch (fakulte) {
        case FAKULTE_DIS:
        case FAKULTE_ECZACILIK:
        case FAKULTE_VETERINER:
            printf("Sinif seciniz: 1-2-3-4-5\n");
            break;
        case FAKULTE_TIP:
            printf("Sinif seciniz: 1-2-3-4-5-6\n");
            break;
        case FAKULTE_DIGER:
        default:
            printf("Sinif seciniz: 1-2-3-4\n");
            break;
        }
        break;
    case YUKSEK_LISANS:
        printf("Sinif seciniz: 1-2\n");
        break;
    default:
        printf("Gecersiz egitim seviyesi girdiniz.\n");
    }
}

//Soru3
/*void displayDate(int day,int month,int year) {
    if ((day >= 4 && day <= 20) || (day >= 24 && day<=30))
        printf("%dth ",day);
    else if (day ==1 || day == 21 || day ==31)
        printf("%dst ",day);
    else if (day == 2 || day == 22)
        printf("%dnd ",day);
    else if (day ==3 || day == 23)
        printf("%drd ",day);
    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }
    printf(" %d",year);

}
int main() {
    int day,month,year;
    printf("gun ay yil giriniz: ");
    scanf("%d %d %d",&day,&month,&year);
    displayDate(day,month,year);
}
*/




//Soru2
/*int main() {

int month;

        printf("Kacinci ayi girmek istiyorsunuz: ");
        scanf("%d", &month);
        switch (month) {
            case 12:
            case 1:
            case 2:
                printf("Kis Mevsimi\n");
                break;
            case 3:
            case 4:
            case 5:
                printf("Ilkbahar Mevsimi\n");
                break;
            case 6:
            case 7:
            case 8:
                printf("Yaz Mevsimi\n");
                break;
            case 9:
            case 10:
            case 11:
                printf("Sonbahar Mevsimi\n");
                break;
            default:
                printf("1 ile 12 arasinda bir ay secin.\n");
    }
}*/



//Soru1
/*int main() {
    int x,y,z;
    printf("1. Sayiyi girin: ");
    scanf("%d",&x);
    printf("2. Sayiyi girin: ");
    scanf("%d",&y);
    printf("Yapilacak ( 1)+ , 2)-, 3)/, 4)* ) islemi girin: ");
    scanf("%d",&z);
    switch (z) {
        case 1:
            printf("Toplama islemi: %d ", x + y);
            break;
        case 2:
            printf("Cikarma islemi: %d", x-y);
            break;
        case 3:
            printf("Bolme islemi: %d", x/y);
            break;
        case 4:
            temp = x * y;
            printf("Carpma islemi: %d",temp);
            break;
        default:
            printf("Yanlis deger girdiniz.: ");
    }
}*/

/*int main(void) {
    int dayno;
    printf("Haftanin kacinci gunu:");
    scanf("%d", &dayno);

    switch (dayno) {
        case 1:
            printf("Pazartesi\n");
            break;
        case 2:
            printf("Sali\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        case 6:
            printf("Cumartesi\n");
            break;
        case 7:
            printf("Pazar\n");
            break;
    }
    printf("s-c yurutuldu\n");
    return 0;
}*/