#include <stdio.h>

int main() {
	//求序列前N项和
	//2/1 + 3/2 + 5/3...
	int n;
	scanf("%d", &n);
	double sum = 0;
	double a = 2;//double类型，防止数据过大超出整数范围 
	double b = 1;
	double t;
	for(int i=0; i<n; i++) {
		sum += a*1.0/b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("%f", sum);
	
	return 0;
}
