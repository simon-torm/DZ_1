#include <stdio.h>
#include <locale.h>

int main()

{
	int a;
	
	setlocale (LC_ALL,"Russian");
	printf("\n\n������� �����  ");
	scanf("&d", &a);
	
	printf("\n������������ ������������� ����� %d: %0\n", a, a);
	
	printf("\n������������ ������������� ����� %d � ���������: %#o\n", a, a);
	
	printf("\n����������������� ������������� ����� %d: %x\n", a, a);
	
	printf("\n����������������� ������������� ����� %d: %#x\n", a, a);
	
	return 0;
}

