#include <stdio.h>

int main() 
{
	//Լ������ʽ
	int dividend;//������
	int divisor;//����
	scanf("%d/%d", &dividend, &divisor);
	int a = dividend;
	int b = divisor;
	int t;
	while(b != 0) {
		t = a % b;
		a = b;
		b = t;
	} 
	printf("%d�����Լ��\n", a);
	printf("%d/%d������ʽΪ%d/%d",dividend,divisor,dividend/a,divisor/a);
} 
