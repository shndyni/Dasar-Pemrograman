/* Program Kasir Fast Food */

#include <stdio.h>
#include <windows.h>
int main()
{
	system("color 07");
	//Deklarasi
	int jlh_burger, jlh_pizza, jlh_softDrink, total, diskon, bayar;
	char member;
	
	//Masukkan Harga
	printf("DAFTAR PESANAN\n\n");
	printf("Burger = ");
	scanf("%d", &jlh_burger);
	
	printf("Pizza = ");
	scanf("%d", &jlh_pizza);
	
	printf("Soft Drink = ");
	scanf("%d", &jlh_softDrink);
	
	total=(jlh_burger*5000)+(jlh_pizza*4500)+(jlh_softDrink*2500);
	bayar=total-diskon;
	
	printf("Do You Have Card Member?(Y/N) ");
	scanf("%s", &member);
	
	//Kondisi
	if(member=='y')
		{diskon=0.1*total;}
	else
		{diskon=0;}
		bayar=total-diskon;
			printf("\nTotal Rp %d \n",total);
			printf("Diskon Rp %d \n",diskon);
			printf("Total yang Harus di Bayar Rp %d \n",bayar);

	return 0;
}


