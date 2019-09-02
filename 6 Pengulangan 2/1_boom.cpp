// Program Seven Boom
// Kelipatan 7 akan menampilkan kata "BOOM!"

#include <stdio.h>
int main()
{
	//Deklarasi
	int a;
	
	printf("*SEVEN BOOM* \n \n");
	
	//Proses
	for(a=1;a<=150;a++)
	{
		if(a%7==0)
		
	//Output
		printf("BOOM!!\n");
		else
		printf("%d \n", a);
	}
}
