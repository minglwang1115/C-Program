#include <stdio.h>

int main()  {
	int a=12;
	int b=20;
	(a>b) ? printf("%d\n", a) : printf("%d\n", b); //验证联系题，是否可以输出最大值
	printf("%d\n", (a>b)?a:b);//都没有问题 
	return 0;//没有任何语句，是否会直接闪一下 ，会弹出控制台输入框，等待输入，可能与编译器有关 
}
