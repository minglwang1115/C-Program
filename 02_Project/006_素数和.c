#include <stdio.h>

int main() {
	//������������ڵ�������������
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
		if(t==1) isPrime = 0;//1�������� 
		if (isPrime) {
			count ++;
			sum += t;
		}
		t++;
	} 
	printf("����%d��%d֮�䣬����%d�����������Ϊ%d",m,n,count,sum);
	return 0;
}
