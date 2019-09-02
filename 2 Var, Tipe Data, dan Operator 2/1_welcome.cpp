/* Program Membaca dan Menampilkan Tulisan */
#include <stdio.h>
int main()
{
	//Deklarasi Variabel
    char nama [50];
    char nim [10];
    char kelas [5];
    
    //Masukkan Nama
    printf("Nama:");
    gets(nama);
    
    //Masukkan NIM
    printf("NIM:");
    gets(nim);
    
    //Masukkan Kelas
    printf("Kelas:");
    gets(kelas);
    
    //Hasil
    printf("Hi!  %s \n", &nama);
    printf("Your Student ID is  %s \n", &nim);
    printf("Welcome to class  %s \n", &kelas);
    return 0;
}
