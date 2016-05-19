#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = 2;
	int tmp;
	
	printf("\nX = %d\nY = %d", x, y);
	
	tmp = x;
	x = y;
	y = tmp;
	
	printf("\nX = %d\nY = %d", x, y);
	
	return 0;
}