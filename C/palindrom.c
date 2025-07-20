# include <stdio.h>
int inverse (int num) {
	int res = 0;
	while (num) {
	res *= 10;
	res += (num % 10);
	num /= 10;
	}
	return res;
	}

int palindrom (int num) {
	int flag = 0;
	int pal = 0;
	while (!flag) {
	pal = inverse(num);
	if (pal == num) {
		flag = 1;
	} else {
		num += pal;
	}
	}
	return pal;
	}

int main() {
	int number = 0;
	printf("Enter number: ");
	scanf("%d", &number);
	int res = palindrom(number);
	printf("Result: %d\n", res);
	return 0;
	}
