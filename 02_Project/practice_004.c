#include <stdio.h>

//Hanoi������
//һ������������룬A��B��C��A��������64����С���ȵ�Բ�̣�������£�С�����ϡ�
//Ҫ����64��Բ�̴�A���ƶ�C���ϣ�ÿ��ֻ���ƶ�һ��Բ�̣��ƶ����Խ���B����С�
//�����κ�ʱ���κ����ϵ�Բ�̶����뱣�ִ������£�С������
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
