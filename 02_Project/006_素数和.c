#include <stdio.h>

int main() {
	//计算给定区间内的素数个数及和
	int m,n;
	scanf("%d %d", &m, &n);
	int count = 0;
	int sum = 0;
	int t = m;
	
	while(t <= n) {
		int i = 2;
		int isPrime = 1; 
		while(i < t) {
			if (t % i == 0) {
				isPrime = 0;
				break;	
			}
			i++;
		}
		if(t==1) isPrime = 0;//1不是素数 
		if (isPrime) {
			count ++;
			sum += t;
		}
		t++;
	} 
	printf("介于%d和%d之间，共有%d个素数，其和为%d",m,n,count,sum);
	return 0;
}
