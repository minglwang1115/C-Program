#include <stdio.h>

int main() 
{
	//约分最简分式
	int dividend;//被除数
	int divisor;//除数
	scanf("%d/%d", &dividend, &divisor);
	int a = dividend;
	int b = divisor;
	int t;
	while(b != 0) {
		t = a % b;
		a = b;
		b = t;
	} 
	printf("%d是最大公约数\n", a);
	printf("%d/%d的最简分式为%d/%d",dividend,divisor,dividend/a,divisor/a);
} 
