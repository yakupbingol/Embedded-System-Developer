/*
Dongu deyimleri (Loop Statements)
Bir isi tekrar tekrar yapmak icin kullandigimiz deyimler

while		%23
do while	%2
for			%75

Yazilimda yapilmamasi gerekn seylerden biride : Code Repetition

Bakim Zorlugu

Akis Diyagramlari(Flow Chart): Yazilim Muhendisliginde bir algoritmayi bir is akisini grafiksel olarak gosteren diyagramlardir.


	NOT: BU SORULARDA LOJIK OPERATORLER KULLANMAK YASAK.  (|| && !)
	Ornek1:
	klavyeden girinlen x'e gore y'nin ve z'nin degerini yazdiran programi yaz
	x<0 ise
		y = x * 2 + 2x
		z = 3x

	x>0 ise
		y = x
		z = x^2 + 10

	Ornek2:
	klavyeden a,b giriliyor, a>b, a=b ve a<b olabilir. a ile b arasindaki buyukluk kucukluk iliskinisi gosteren
	ekrana yazdiran programi veriniz.(Akis Diyagrami da ciz)

	Ornek3:
	Klavyeden girilen sayinin 0 ile 100 arasinda olup olmadigini bulan programi yaziniz.Akis diyagrami ile beraber.

	Ornek4:
	Klavyeden girilen 3 kenar uzunlugunun bir ucgen olusturup olusturmadigini bulan programi yazin.

	Ornek5:
	Klavyeden bir ucgen icin 3 kenar aliniyor.Alinan ucgenin eskenar ucgen olup olmadigini bulan programi yaziniz.

	Ornek6:
	Girilen 3 farkli sayinin en buyugunu bulan programi yaziniz.Akis diyagraminida ciziniz.

	Ornek7:
	Bir ogrencinin Notu 0 ile 100 arasinda olabilir.
	90-100 arasindaysa AA
	80-90 - AB
	70-80 - BB
	60-70 - CB
	55-60 - CC
	50-55 - DC
	50 alti FF


*/
//Srou5
void eskenarUcgen(int a, int b, int c) {

	if (a == b)
		if (b == c)
			printf("eskenar ucgendir");
		else
			printf("eskenar ucgen degildir");
}

int main()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			sum = i * j;
			printf("%d * %d = %d\n", i, j, sum);
		}
		printf("******************************\n");
	}

	int n;
	printf("n gir: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

	}
	/*int sum=0;
	int n;
	for (int i= 0; i<8;i++) {
		printf("sayi girin:   ");
		scanf("%d",&n);
		sum += n;
	}
	printf("toplam: %d",sum);*/


	/* Soru1
		int x,y,z;
		printf("Lutfen x'i girin: \n");
		scanf("%d", &x);

		if (x < 0) {
			y = x * 2 + (2 * x);
			z = 3 * x;
		}

		if (x >= 0) {
			y = x;
			z = (x  x) + 10;
		}
		printf("y: %d , z: %d", y, z);

	*/
	/* Soru2
	int a,b;
	printf("a gir: ");
	scanf("%d/n ",&a);
	printf("b gir: ");
	scanf("%d/n ",&b);

	if (a < b)
		printf("a < b dir");
	if (a > b)
		printf("a > b dir");
	if (a == b)
		printf("a == b dir");

		*/
		/* Soru3
			int x;
			printf("bir sayi gir: ");
			scanf("%d", &x);

			if (x >=0)
				if (x<= 100)
					printf("sayi 0 ile 100 arasindadir.");
			else
				printf("sayi 0 ile 100 arasinda degildir.");

				*/
				/* Soru4
					int a,b,c;
					printf("ucgenin kenarlarini  gir:");
					scanf("%d %d %d",&a,&b,&c);

					if (a + b > c)
						if (a + c > b)
							if (b + c > a)
								printf("ucgen olusturur");
					else
						printf("ucgen olusmaz");
						*/

						/* Soru5
							int a,b,c;
							printf("ucgenin kenarlarini  gir:");
							scanf("%d %d %d",&a,&b,&c);

							if (a == b)
								if (b == c)
									printf("eskenar ucgendir");
							else
								printf("eskenar ucgen degildir");
						*/

						/* Soru6
						int a,b,c;
						printf("3 sayi gir:");
						scanf("%d %d %d",&a,&b,&c);
						int enBuyuk = a;
						if (b > enBuyuk)
							enBuyuk = b;
						if (c > enBuyuk)
							enBuyuk = c;
						printf("en buyuk sayi: %d",enBuyuk);
					*/

					/* Soru7
					int a;
					printf("not  gir: ");
					scanf("%d/n ",&a);

					if (a>=90)
						if (a<=100)
							printf("AA");
					if (a>=80)
						if (a<=90)
							printf("AB");
					if (a>=70)
						if (a<=80)
							printf("BB");
					if (a>=60)
						if (a<=70)
							printf("CB");
					if (a>=55)
						if (a<=60)
							printf("CC");
					if (a>=50)
						if (a<=55)
							printf("DC");
					if (a<=50)
						printf("FF");

				*/
				/*
				 int a,b,c;
				printf("ucgenin kenarlarini  gir:");
				scanf("%d %d %d",&a,&b,&c);
				eskenarUcgen(a,b,c);
				*/
}