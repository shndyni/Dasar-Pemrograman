//Program Modular (Aneka Bangun)

#include <stdio.h>
#include <math.h>

void tampilkanPilihan(){
	printf("ANEKA BANGUN\n");
	printf("1. Lingkaran \n");
	printf("2. Persegi \n");
	printf("3. Segitiga \n");
	}

//Keliling dan Luas Lingkaran
float luasLingkaran(float r){
	return 3.14*r*r;}	
float kelilingLingkaran (float r){
	return 2*3.14*r*r;}

//Proses Lingkaran	
void prosesLingkaran(){
	float r,luas,keliling;
	printf("\n*Lingkaran*\n");
	printf("\nMasukkan Jari-jari (r) = ");
	scanf("%f", &r);
	
	luas = luasLingkaran (r);
	keliling = kelilingLingkaran (r);
	
	printf("Luas Lingkaran = %f cm\n", luas);
	printf("Keliling Lingkaran = %f cm\n", keliling);
	}

//Keliling dan Luas Persegi
float luasPersegi(float sisi){
	return sisi*sisi;}
float kelilingPersegi (float sisi){
	return 4*sisi;}

//Proses Persegi
void prosesPersegi(){
	float sisi,luas,keliling;
	printf("\n*Persegi*\n");
	printf("\nMasukkan Sisi = ");
	scanf("%f", &sisi);
	
	luas = luasPersegi(sisi);
	keliling = kelilingPersegi(sisi);
	
	printf("Luas Persegi = %f cm\n", luas);
	printf("Keliling Persegi = %f cm\n", keliling);
	}

//Keliling dan Luas Segtiga
float luasSegitiga (float a,float t){
	return 0.5 * a * t;}
float kelilingSegitiga (float a, float t, float c){
	c = sqrt(a*a + t*t);
	return a + t + c ;}

//Proses Segitiga	
void prosesSegitiga(){
	float a , t , c, luas , keliling;
	printf("\n*Segitiga*\n");
	printf("\nMasukkan a = ");
	scanf("%f", &a);
	printf("Masukkan t = ");
	scanf("%f", &t);
	
	luas = luasSegitiga(a,t);
	keliling = kelilingSegitiga(a,t,c);
	
	printf("Luas Segitiga = %f cm\n", luas);
	printf("Keliling Segitiga= %f cm\n \n", keliling);
	}

	
//Program Utama
#include <stdio.h>
main(){
	tampilkanPilihan();
	prosesLingkaran();
	prosesPersegi();
	prosesSegitiga();
	
	system ("PAUSE");
	return 0;
	}

