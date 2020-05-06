//01.统计所输入的50个实数中有多少正数、负数、0
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

//02.计算并输出x^2+y^2=1989的所有整数
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

//03.输入一个十进制整数，然后输出它的八进制和十六进制数 
#include <stdio.h>
//二进制转十进制："1101",思路：从最右侧开始,str[pos] - '0',j *= 2;
//	  int j = 1;
//    int pos = strlen(str) - 1;
//    for(; pos >= 0; pos--) 
//    {
//        sum += (str[pos] - '0') * j;
//        j *= 2;
//    }
//十进制转二进制：递归，除2倒取余 
//void decimal2binary(int dec)
//{
//    if(dec / 2)
//    {
//        decimal2binary(dec / 2); // 递归
//    }
//    printf("%d", dec % 2);
//} 

int main() {
	int origin;
	scanf("%d",&origin);
	printf("%d对应的十六进制数为：%#x\n",origin);
	return 0;
} 
