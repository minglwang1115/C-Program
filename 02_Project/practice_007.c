#include <stdio.h>

int main()  {
	int a=12;
	int b=20;
	(a>b) ? printf("%d\n", a) : printf("%d\n", b); //��֤��ϵ�⣬�Ƿ����������ֵ
	printf("%d\n", (a>b)?a:b);//��û������ 
	return 0;//û���κ���䣬�Ƿ��ֱ����һ�� ���ᵯ������̨����򣬵ȴ����룬������������й� 
}
