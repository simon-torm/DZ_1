#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)
{
	char y;
	int a, b, c;
	float D, x1, x2;
	
	setlocale(LC_ALL,"Russian");
	printf("\n\n����� ������ ��������� ���� a*x^2+b*x+c=0\n");
	printf("������� a: ");
	scanf("%d", &a);
	printf("������� b: ");
	scanf("%d", &b);
	printf("������� c: ");
	scanf("%d", &c);
	printf("\n������ ��������� %d*x^2+%d*x+%d=0\n\n", a, b, c);
	
	D = b * b - (4 * a * c);
	if (D >= 0) {
			x1 = (- b + sqrt(D)) / (2 * a);
			x2 = (- b - sqrt(D)) / (2 * a);
			printf("\nx1 = %.1f\tx2 = %.1f\n\n\n", x1, x2);
		} else {
			printf("\n��� �������������� �������\n\n\n");
		}
		
	printf("������� 'y', ���� ������ ����������,\n"
		"��� ����� ������ ������, ���� ������ ���������: ");
		
	scanf("%s", &y);
	
	if (y == 'y') {
			system("DISCR.exe");
		} else {
			system("pause");
		}
		
	return 0;
}