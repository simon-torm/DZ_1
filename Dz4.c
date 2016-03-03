#include <stdio.h>

int main ()

{
	float a;
	printf("\n\nVvedite a\n\n");
	scanf("%f", &a);
	printf("\n\n%3.1f\n\n", a);
	printf("\n\n%3.3f\n\n", a);
	printf("\n\n%3.7f\n\n", a);
	printf("\n\n%e\n\n", a);	
	
	return 0;
}