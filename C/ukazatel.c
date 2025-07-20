#include <stdio.h>

int add (int a, int b);

int main() {
	int number = 40;
	int *p_number = &number;
	printf("Первое значение: %d\n", *p_number);

	*p_number = 100;
	printf("Второе значение: %d\n", number);

	number = 500;
	printf("Третие значение: %d\n", *p_number);
	int * p_number1 = p_number;
	printf("Второй указатель: %d\n", *p_number1);
	printf("Адрес на второй указатель:%p\n", (void*)p_number1);

	int (*p_func)(int, int);
	p_func = add;
	printf("Сумма: %d\n", p_func(2, 3));
	return 0;
	}

int add (int a, int b) {
	return a + b;
	}
