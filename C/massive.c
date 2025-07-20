# include <stdio.h>
# include <stdlib.h>

int main () {
	int c[] = {1,2,3};
	int size = sizeof(c);
	for (int h=0; h < size; h++) {
	printf("c[%d] = %d\n", h, c[h]);
	}
	int b[3] = {10,20,35};
	for (int g=0; g < 3; g++) {
	printf("g[%d] = %d\n", g, b[g]);
	}
	int a[10];
	for (int i; i < 10; i++) {
	*(a+i)+=i;
	printf("a[%d] = %d\n", i, a[i]);
	}
	printf("a = %p\n", a);
	return 1;
}
