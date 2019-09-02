// Program Cek Palidrom

#include<stdio.h>
#include<string.h>

int main()
{
	char kata[200];
	char cek[200];
	
	printf("CEK PALIDROM\n\n");
	printf("Masukkan Kata = ");
	gets(kata);
	
	strcpy(cek, kata);
	strrev(cek);
	
	if(strcmp(kata, cek)==0){
		printf("Kata %s adalah PALIDROM", kata);
	}
	else{
		printf("Kata %s BUKAN PALIDROM", kata);
	}
	
	printf(" Kebalikan Kata %s", cek);
	
return 0;
}
