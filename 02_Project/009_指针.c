#include <stdio.h> 
 
int main() {
	//double a = 1.1;
	//int *p = &a; //指针类型不匹配，需要换成double，[Warning] initialization from incompatible pointer type
	int a[] = {0,1};
	int *p = a;
	printf("%d\n",*p);//默认指向数组第一个值的地址 
	printf("%d\n",p[0]);
	return 0;
} 
