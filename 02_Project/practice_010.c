//01.ͳ���������50��ʵ�����ж���������������0
//#include <stdio.h>
//
//int main() {
//	printf("please input 6 num: \n");
//	double a[6];
//	int i = 0;
//	while(i<6) {
//		scanf("%lf",a+i);
//		i++;
//	}
//	int highNum=0, lowNum=0, midNum=0;
//	for(i=0; i<6; i++) {
//		if (a[i]>0) {
//			highNum++;
//		} else if(a[i]<0) {
//			lowNum++;
//		} else {
//			midNum++;
//		}
//	} 
//	printf("highNum=%d, lowNum=%d, midNum=%d\n", highNum, lowNum, midNum);
//} 

//02.���㲢���x^2+y^2=1989����������
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int max = sqrt(1989);
////	int max = 1989;
//	int x, y;
//	for(x=0; x<=max; x++) {
//		for(y=0; y<=max; y++) {
//			if(x*x + y*y == 1989) {
//				printf("%d^2+%d^2=1989\n",x,y);
//			}
//		}
//	}
//	return 0;
//} 

//03.����һ��ʮ����������Ȼ��������İ˽��ƺ�ʮ�������� 
#include <stdio.h>
//������תʮ���ƣ�"1101",˼·�������Ҳ࿪ʼ,str[pos] - '0',j *= 2;
//	  int j = 1;
//    int pos = strlen(str) - 1;
//    for(; pos >= 0; pos--) 
//    {
//        sum += (str[pos] - '0') * j;
//        j *= 2;
//    }
//ʮ����ת�����ƣ��ݹ飬��2��ȡ�� 
//void decimal2binary(int dec)
//{
//    if(dec / 2)
//    {
//        decimal2binary(dec / 2); // �ݹ�
//    }
//    printf("%d", dec % 2);
//} 

int main() {
	int origin;
	scanf("%d",&origin);
	printf("%d��Ӧ��ʮ��������Ϊ��%#x\n",origin);
	return 0;
} 
