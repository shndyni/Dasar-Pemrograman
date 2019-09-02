//Program Ubah Kapital

#include<stdio.h>

int main()
{
	int i;
	char kata[20];
	
	printf("Masukkan Kata = ");
	gets(kata);
	printf("Hasil = ");
	
	for (i=0;i<kata[i];i++){
		printf("%c", toupper(kata[i]));
	}
	
return 0;
}
