#include <stdio.h>
#include <string.h>

void main()
{

	struct bibim {
		int a;
		float b;
		char c;	
		char d[5];
	};

	struct bibim b1;

	b1.a = 10;
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy(b1.d, "ABCD");

	pirntf("b1.a ==> %d \n", b1.a);	
	pirntf("b1.b ==> %d \n", b1.b);	
	pirntf("b1.c ==> %d \n", b1.c);	
	pirntf("b1.d ==> %d \n", b1.d);

}	
