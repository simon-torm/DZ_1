#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)
{
	char y;
	int a, b, c;
	float D, x1, x2;
	
	setlocale(LC_ALL,"Russian");
	printf("\n\nбудем решать уравнение типа a*x^2+b*x+c=0\n");
	printf("введите a: ");
	scanf("%d", &a);
	printf("введите b: ");
	scanf("%d", &b);
	printf("введите c: ");
	scanf("%d", &c);
	printf("\nрешаем уравнение %d*x^2+%d*x+%d=0\n\n", a, b, c);
	
	D = b * b - (4 * a * c);
	if (D >= 0) {
			x1 = (- b + sqrt(D)) / (2 * a);
			x2 = (- b - sqrt(D)) / (2 * a);
			printf("\nx1 = %.1f\tx2 = %.1f\n\n\n", x1, x2);
		} else {
			printf("\nнет действительных ответов\n\n\n");
		}
		
	printf("введите 'y', если хотите продолжить,\n"
		"или любой другой символ, если хотите закончить: ");
		
	scanf("%s", &y);
	
	if (y == 'y') {
			system("DISCR.exe");
		} else {
			system("pause");
		}
		
	return 0;
}