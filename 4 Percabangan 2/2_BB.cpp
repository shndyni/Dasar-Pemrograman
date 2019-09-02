/* Program BMI */

#include <stdio.h>
int main()
{
	//Deklarasi variabel
	float berat, tinggi, bmi;
	
	//Masukkan Berat Badan
	printf("Masukkan Berat Badan (kg) = ");
	scanf("%f", &berat);
	
	//Masukkan Tinggi Badan
	printf("Masukkan Tinggi Badan (m) = ");
	scanf("%f", &tinggi);
	
	//Hitung BMI
	bmi = berat/(tinggi*tinggi);
	printf("\n\nBMI Anda = %f \n", bmi);
	
	//Kondisi
	if(bmi<18.5)
		printf("\nBerat Badan Kurang");
	else if(bmi>=18.5&&bmi<23.9)
		printf("Berat Badan Normal");
	else if(bmi>=24.0&&bmi<26.9)
		printf("Berat Badan Lebih");
	else if (bmi>=27.0)
		printf("\nObesitas");
	
return 0;
}
