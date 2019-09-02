//Program Coba Rumus
#include <stdio.h>
#include <math.h>

main(){
int x,y;

printf("CobaMath\n\n");

//Input Bil
printf("Input Bil 1 = ");
scanf("%i",&x);	
printf("Input Bil 2 = ");
scanf("%i",&y);	

//fmin	
int kecil = fmin(x,y)	;
printf("Nilai Terkecil = %i\n",kecil);

//fmax	
int besar = fmax(x,y)	;
printf("Nilai Terbesar = %i\n",besar);	

//pow	
int pangkat = pow(x,y)	;
printf("Hasil %i pangkat %i adalah % i\n",x,y,pangkat);	
	
return 0;	
}
 
