// Program Balik Kata

#include<stdio.h>
#include<string.h>

main()
{
	int hitung;
	char kata[200];
	
	printf("PROGRAM BALIK KATA\n\n");
	printf("Masukkan Kata = ");
	scanf("%s", &kata);
	
	hitung=strlen(kata);
	
	printf("Kata Setelah Dibalik = ");
	
	for(hitung-1;hitung>0;hitung--){
		printf("%c", kata[hitung-1]);
	}
	
return 0;
}
