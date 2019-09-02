//Program Tabel Pangkat

#include <stdio.h>
#include <math.h>
int main()
{
	//Deklarasi
	int a, b, c;
	
	printf("---TABEL PANGKAT---\n\n");
	printf("i\ti^2\ti^3\n");
	printf("-------------------\n");
	
	for(a=1; a<=100; a++){
	b=pow(a,2);
	c=pow(a,3);
	printf("%d\t%d\t%d\n", a,b,c);}
	
return 0;
}
