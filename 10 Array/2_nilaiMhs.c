//Program Nilai Mahasiswa

#include<stdio.h>
#define Nmaks 100

main()
{
	typedef struct{
		char nama[40];
		int kuis, uts, uas;
		float Nakhir;
	}dataMhs;
	
	dataMhs tabMhs[Nmaks];
	int i,j;
	
	printf("Jumlah Mahasiswa (kelas) = ");
	scanf("%d", &j);
	printf("\n\n");
		
	for(i=0;i<j;i++)
	{
		printf("Nama[%s] = ", i);
		scanf("%s", &tabMhs[i].nama);
		
		printf("Nilai Kuis[%d] = ", i);
		scanf("%d", &tabMhs[i].kuis);
		
		printf("Nilai UTS[%d] = ", i);
		scanf("%d", &tabMhs[i].uts);
		
		printf("Nilai UAS[%d] = ", i);
		scanf("%d", &tabMhs[i].uas);
		printf("\n");
		
		tabMhs[i].Nakhir=(tabMhs[i].kuis*0.2)+(tabMhs[i].uts*0.4)+(tabMhs[i].uas*0.4);
	}
	
		printf("Nama\t | Kuis\t | UTS\t | UAS\t | Nilai Akhir\n");
		for(i=0;i<j;i++)
		{
			printf("%s\t | %d\t | %d\t | %d\t | %f\n", tabMhs[i].nama, tabMhs[i].kuis, tabMhs[i].uts, tabMhs[i].uas, tabMhs[i].Nakhir);	
		}	
	
return 0;
}
