#include <stdio.h>
#include <locale.h>

int main()

{
	int a;
	
	setlocale (LC_ALL,"Russian");
	printf("\n\nПредите число  ");
	scanf("&d", &a);
	
	printf("\nвосьмеричное представление числа %d: %0\n", a, a);
	
	printf("\nвосьмеричное представление числа %d с префиксом: %#o\n", a, a);
	
	printf("\nшестнадцатеричное представление числа %d: %x\n", a, a);
	
	printf("\nшестнадцатеричное представление числа %d: %#x\n", a, a);
	
	return 0;
}

