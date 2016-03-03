#include <stdio.h>

int main ()

{
	float x, a, b;
	printf("\n\n a * x + b = 0\n");
	printf("\nVvedite a ");
	scanf("%f", &a);
	printf("\nVvedite b ");
	scanf("%f", &b);
	//a * x + b = 0;
	//a * x = -b;
	x = - b / a;	
	printf("\nx = %3.2f\n\n", x);
	return 0;
}
