#include <stdio.h>

int main() {
	int a = 5;
	int *p = &a;
	printf("%p,%d\n",p,p);
	printf("sizeof(p)=%d\n",sizeof(p));//8
	return 0;
} 
