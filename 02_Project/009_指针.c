#include <stdio.h> 
 
int main() {
	//double a = 1.1;
	//int *p = &a; //ָ�����Ͳ�ƥ�䣬��Ҫ����double��[Warning] initialization from incompatible pointer type
	int a[] = {0,1};
	int *p = a;
	printf("%d\n",*p);//Ĭ��ָ�������һ��ֵ�ĵ�ַ 
	printf("%d\n",p[0]);
	return 0;
} 
