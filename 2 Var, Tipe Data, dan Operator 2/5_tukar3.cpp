/* Program Pertukaran */
#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
	/* Deklarasi Variabel */
   string string1;
   string string2;
   string string3;
   string tmp;
 
   string1 = "a";
   string2 = "b";
   string3 = "c";
   
 	/* Data sebelum ditukar */
   cout << "Data SEBELUM ditukar :" << endl;
   cout << "string1 = " << string1 << endl;
   cout << "string2 = " << string2 << endl; 
   cout << "string3 = " << string3 << endl << endl;
   
   /* Tukar */
   tmp = string1;
   string1 = string2;
   string2 = string3;
   string3 = tmp;
   
 	/* Data setelah ditukar */
   cout << "Data SETELAH ditukar :" << endl;
   cout << "string1 = " << string1 << endl;
   cout << "string2 = " << string2 << endl;
   cout << "string3 = " << string3 << endl <<  endl;
 
   return 0;
}
