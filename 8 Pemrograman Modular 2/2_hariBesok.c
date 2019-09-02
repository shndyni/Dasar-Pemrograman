//Program Menampilkan Hari Esok
#include <stdio.h>
#include <string.h>

void tampilhari(char hari[10])
{
	//senin
	if (strcmp(hari,"senin")==0){
		printf("Besok Hari Selasa \n");
		}
		
	//selasa
	else if(strcmp(hari,"selasa")==0){
		printf("Besok Hari Rabu \n");
		}
		
	//rabu
	else if(strcmp(hari,"rabu")==0){
		printf("Besok Hari Kamis \n");
		}
		
	//kamis
	else if(strcmp(hari,"kamis")==0){
		printf("Besok Jumat \n");
		}
		
	//jum'at
	else if(strcmp(hari,"jumat")==0){
		printf("Besok Hari Sabtu \n");
		}
		
	//sabtu
	else if(strcmp(hari,"sabtu")==0){
		printf("Besok Hari Minggu \n");
		}
		
	//jika minggu
	else{
		printf("Besok Hari Senin \n");
		}
}

int main()
{
	//Deklarasi variabel
	char pilihan;
	char hari[10];
	
	//Input hari
	printf("Masukkan Hari = ");
	scanf("%s",&hari);

	tampilhari(hari);
	//Program melanjutkan
	printf("Apakah ingin melanjutkan Program ? y/n = ");
	scanf("%s",&pilihan);
	
	while (pilihan=='y')
	{
		printf("Masukkan Hari = ");
		scanf("%s",&hari);
		tampilhari(hari);
		printf("Apakah ingin melanjutkan Program ? y/n = ");
		scanf("%s",&pilihan);
	}

return 0;
}

