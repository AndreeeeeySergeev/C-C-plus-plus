#include <stdio.h>
#include <math.h>

double exp1(double x, int n) {
	double sum = 1;
	double y = x*x;
	double prev = 1;
	for (int i = 1; i <= n; ++i) {
	prev = -prev*(y/i);
	sum += prev;
	}
	return sum;
	}

int main() {
	double x = 0;
	int n = 0;
	printf("Enter x: ");
	scanf("%lf", &x);
	printf("Enter iterations number(>0): ");
	scanf("%d", &n);
	double res = exp1(x,n);
	double math_res = exp(-x*x);
	printf("Our exponent: %.10lf\n math exponent: %.10lf\n", res, math_res);
	return 0;
	}
