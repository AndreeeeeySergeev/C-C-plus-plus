#include <stdio.h>

int main() {
	int number = 40;
	int *p_number = &number;
	printf("Первое значение: %d\n", *p_number);
	
	*p_number = 100;
	printf("Второе значение: %d\n", *p_number);

	number = 500;
	printf("Третие значение: %d\n", *p_number);
	return 0;
	}
