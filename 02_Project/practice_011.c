#include <stdio.h>

//int main() {
////	int i;
////	ll: for(i=1; i<5; i++) {
////		if(i==2) {
////			printf("%d\n",i);
////			goto ll;//��ѭ�� 
////		}
////	}
//
//
//	char str1[10];
//	char str2[10];
//	scanf("%s",str1);//����11 22 ����һ���������ַ��� 
//	printf("%s\n",str1);// ���11 
//	gets(str2);//����11 22 
//	printf("%s\n",str2);//���11 22����һ���ַ��� 
//} 

//��ȡ����դ���ļ�������� 
//int main() {
//	FILE *p1,*p2,*p3;
//	p1 = fopen("data/a.dat","r");
//	p2 = fopen("data/b.dat","r");
//	p3 = fopen("data/c.dat","w");
//	int a1,a2,a3;
//	while(!feof(p1)) {
//		fscanf(p1,"%d",&a1);
//		fscanf(p2,"%d",&a2);
//		a3 = a1 + a2;
//		printf("%d\n",a3);
//		fprintf(p3,"%d ",a3);
//	}
//	fclose(p1);
//	fclose(p2);
//	fclose(p3);
//} 

#define B(a) (a*b)
int c = 4;
static int d = 4;
int main() {
	int a = 1, b = 2;
	static int e = 4;
	printf("%d\n", B(a));//2
	printf("%x\n",&a);
	printf("%x\n",&c);
	printf("%x\n",&d);//
	printf("%x\n",&e);//static��ȫ�ֱ������Ǵ洢�ھ�̬�� 
} 
