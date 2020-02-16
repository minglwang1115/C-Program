#include <stdio.h>

int main() 
{
	//水仙花数 
	int n = 0;
	printf("请输入位数");
	scanf("%d", &n);
	int number = 1;
	int i = 1;
	while(i < n) {
		number *= 10;
		i++;
	}
	int temp = 0;
	for(i=number; i<number*10; i++){
		
		int t = i;
		int sum = 0;
		while(t>0) {
		int d = t % 10;
		t = t / 10;
		int k=d;
		temp = n;
		while(temp > 1) {
			k *= d;
			temp--;
		}
		sum += k;
		} 
		if (sum == i) printf("%d\n", sum);
	}
	return 0;
}
