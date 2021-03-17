#include <stdio.h>
#include <stdlib.h>

//POINTER(GOSTERICILER)

/* Gosterici islecleri nedir?

* --> icerik isleci(indirection operator)
&---> adres isleci(address of operator)
[]---> koseli ayrac isleci(index operator)
->  ---> ok isleci(arrow operator)

*/

int main() {

int *ptr,sayi;
sayi=20;
ptr=&sayi;

// burada sayi degiskeninin adresini ptr nesnesine atadik.Dikkat edilmesi gereken sey ise atadigimiz degisken ve nesnenin ayni turden olmasidir.

//Simdi ptr nin degerine bakalim

printf("ptr nesnesinin tuttugu adres :%p\n",ptr);        //bu ifade bize ptr nesnesinin adresini verecektir.      NOT: Daha duzenli adres icin %p yerine %x de kullanabiliriz.
printf("ptr degiskeninin degeri:%d\n",*ptr);      //ptr degiskeni sayi degiskeninin adresini tuttugu icin degeri 20 olacaktir.
printf("sayi nesnesinin adresi: %p\n",&sayi);     //sayi nesnesinin adresi=ptr nesnesinin adresi
printf("ptr nesnesinin kendi adresi: %p\n",&ptr);   // ptr nesnesinin kendi adresinden de soz edilebiir.Bu adres ile tuttugu adres degerleri farklidir.

// NOT: ++&x; seklinde bir arttirma isleminden soz edilemez cunku arttirma islemi yapmak icin arttiracagimiz terim nesne olmalidir &x ifadesi ise sadece bir adres degeridir.

++*ptr;
printf("ptr degiskeninin degeri:%d",*ptr);  // 21 ciktisini verir..


	
	return 0;
}