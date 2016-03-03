#include <stdio.h>

int main ()

{
	float x, y;
	printf("\nVvedite \"X\"\n\n");
	scanf("%f", &x);
	y = x * x;
	printf ("\nx=%3.1f\ty=%3.1f\n\n", x,y);
	return 0;	
}