
/*
	Multidimensional Array
	int x[a][b];	a dizinin boyutu, x'in ogelerinin turu

	int b[10][20]; a oyle bir diziki 10 elemana sahip ve elemanlarinin her int biri 20 elemana sahip
	Bir okula yazýlým yazýyoruz ve yazdýðýmýz program þu þekilde veriler tutmaktadýr. 
	10 sýnýf var ve her sýnýf 20 öðrenciden oluþuyorda bu okul için öðrenci numaralarýný saklýyor 
	çok boyutlu dizi bileþimiz Soru1: 3 satýr 4 sutunden oluþan bir matris tanýmlayýn tüm elemanlarýný 5 yapýn.
	Soru2: Þu matrisi elde ediniz 1 2 3 4 5 6 7 8 9 10 11 12 
	Soru 3: 1 2 3 1 2 3 1 2 3 1 2 3 
	soru4: Rastgele bir 4*5 lik matris oluþturma 
	soru5: oluþturduðunuz matriste her satýrdaki en buyuk etkinleþen programý yazýnýz. 
	soru6: matristeki en büyük ve en küçük öðe bulan programý yazmanýz 
	soru7: matrisdeki en büyük öðe ve yer bulan programý þu satýr þu þekilde listelendi: 
	soru8: Her sütün toplamýnýn ortalamasýný ve ekranýný yazdýran program. 
	soru9: Her bölümün toplamýnýn ortalamasýný ve ekranýný yazdýran program. 
	5'e 5 lik elemanlar rastgele verilmiþ bir matrisi þu forma çeviriniz
	1 0 0 0 0
	0 1 0 0 0
	0 0 1 0 0
	0 0 0 1 0
	0 0 0 0 1

	0 0 0 0 1 
	0 0 0 1 0
	0 0 1 0 0 
	0 1 0 0 0 
	1 0 0 0 0
	soru1 int Students_no[3][4]={ {120,258,330,332}, {278,323,100,200}, {578,145,772,287} }; 
	bu çok boyutlu dizi bir okuldaki sýnýflara iliþkin öðrencilerin numaralarýný içermektedir
	A) kullanýcýdan alýnan bir öðrenci numarasýna göre geçiþ var mý yok bulan programý
	B) OKUDLDA VAR mý yok mu bulan programý varsa hangi sýnýfta ?



*/



/*
int students_no[3][4]={ {120,258,330,332},
{278,323,100,200},
{578,145,772,287}
};
*/





#include <stdio.h>
#define ASIZE(x) sizeof(x)/sizeof(x[0])

/*
//Soru11
int main() {
	int matrix[5][5];
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("-----------------------------------------------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i + j == 4)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}
*/


/*
//Soru 10
int main() {
	int matrix[5][5];
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("-----------------------------------------------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}

	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}
*/


/*
//Soru 9
int main() {
	int matrix[4][5];
	int sum = 0;
	int average=0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
			sum = sum + matrix[i][j];
			average = sum / 5;
		}
		printf(" satir toplami: %d , ortalamasi: %d", sum, average);
		sum = 0;
		average = 0;
		printf("\n");
	}
}
*/
 


/*
//Soru 8
int main() {
	int matrix[4][5];
	int sum = 0;
	int average = 0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	for (int j = 0; j < 5; j++) {

		for (int i = 0; i < 4; i++) {
			sum += matrix[i][j];
		}
		average = sum / 4;
		printf("Sutun  toplami: %d, ortalamasi: %d\n", sum, average);
		sum = 0;
	}
}
*/






/*
//Soru 7
int main() {
	int matrix[4][5];
	int enBuyuk = 0;
	int satir, sutun;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
			if (enBuyuk < matrix[i][j]) {
				enBuyuk = matrix[i][j];
				satir = i;
				sutun = j;
			}
		}
		printf("\n");
	}
	printf("en buyuk: %d\n", enBuyuk);
	printf("satir:%d sutun:%d ", satir, sutun);
}
*/


/*
//Soru 6
int main() {
	int matrix[4][5];
	int enKucuk;
	int enBuyuk;


	for (int i =0;i < 4;i++) {
		for (int j =0; j < 5;j++) {
			matrix[i][j] = rand() % 150;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	enBuyuk = matrix[0][0];
	enKucuk = matrix[0][0];
	for (int i = 0;i < 4;i++) {
		for (int j = 0; j < 5;j++) {
			if (enBuyuk < matrix[i][j])
				enBuyuk = matrix[i][j];
			else if (enKucuk > matrix[i][j])
				enKucuk = matrix[i][j];
		}
	}
	printf("en buyuk: %d \n", enBuyuk);
	printf("en kucuk: %d \n", enKucuk);
}
*/









/*
//Soru 5
int main() {
	int matrix[4][5];
	int enBuyuk=0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
			if (enBuyuk < matrix[i][j])
				enBuyuk = matrix[i][j];

		}
		printf("satirin en buyugu: %d ", enBuyuk);
		printf("\n");
	}
}
*/


/*
//Soru 4
int main() {
	int matrix[4][5];
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			matrix[i][j] = rand() % 100;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

*/




/*
//Soru 3
int main() {
	int matrix[4][3];
	int temp = 1;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			matrix[i][j] = temp;
			temp++;
			printf("%d ", matrix[i][j]);

		}
		temp = 1;
		printf("\n");
	}
}
*/




/*
//Soru 2
int main() {
	int matrix[4][3];
	int sutun = 1;
	for (int i = 0; i < 4;i++) {
		for (int j = 0;j < 3;j++) {
			matrix[i][j] = sutun;
			sutun++;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

*/




/* 
 //Soru 1
int main() {
	int matrix[3][4];
	int temp = 5;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			 matrix[i][j] = temp;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
*/
