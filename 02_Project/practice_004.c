#include <stdio.h>

//Hanoi塔问题
//一块板上有三根针，A，B，C。A针上套有64个大小不等的圆盘，大的在下，小的在上。
//要把这64个圆盘从A针移动C针上，每次只能移动一个圆盘，移动可以借助B针进行。
//但在任何时候，任何针上的圆盘都必须保持大盘在下，小盘在上
void move(int n, int a, int b, int c) {
	if(n == 1) {
		printf("%c==>%c\n",a,c);
	} else if(n>1) {
		move(n-1, a,c,b);
		printf("%c==>%c\n",a,c);
		move(n-1,b,a,c);
	}
}

int main() {
	int n;
	printf("input number:\n");
	scanf("%d",&n);
	char a='a',b='b',c='c'; 
	move(n,a,b,c);
	return 0;
} 
