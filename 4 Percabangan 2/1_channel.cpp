/* Program Channel */

#include <stdio.h>

int main()
{
		//Deklarasi
		int channel;
		
		//Output
		printf("---CHANNEL TV---\n\n");
		printf("1 = TVRI\n");
		printf("2 = BatamTV\n");
		printf("3 = Indosiar\n");
		printf("4 = TransTV\n");
		printf("5 = Trans7\n");
		printf("6 = MNC\n");
		printf("7 = MetroTV\n");
		printf("8 = TVOne\n");
		printf("9 = RCTI\n");
		printf("10 = SCTV\n");
		printf("11 = ANTV\n\n");
		
		printf("Masukkan Channel yang Anda Inginkan > ");
		scanf("%d", &channel);
		
		switch(channel)
		{
			case 1:
				printf("\n>TVRI\n");
				break;
			case 2:
				printf("\n>BatamTV\n");
				break;
			case 3:
				printf("\n>Indosiar\n");
				break;
			case 4:
				printf("\n>TransTV\n");
				break;
			case 5:
				printf("\n>Trans7\n");
				break;
			case 6:
				printf("\n>MNC\n");
				break;
			case 7:
				printf("\n>MetroTV\n");
				break;
			case 8:
				printf("\n>TVOne\n");
				break;
			case 9:
				printf("\n>RCTI\n");
				break;
			case 10:
				printf("\n>SCTV\n");
				break;
			case 11:
				printf("\n>ANTV\n");
				break;
			default :
 				printf("\n---CHANNEL TIDAK TERDAFTAR---\n");
		}	
return 0;
}
