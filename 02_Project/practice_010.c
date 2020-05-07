//00.关于a=a++;
//f(int a){
//	static c=0;
//	c=a+c++;//c=2+0
//	return c;
//}
//main() {
//	int a=2,i,k;
//	for(i=0;i<2;i++) {
//		k=f(a++);
//	}
//	printf("%d\n",k);//5
//}

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
//#include <stdio.h>
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
//
//int main() {
//	int origin;
//	scanf("%d",&origin);
//	printf("%d对应的十六进制数为：%#x\n",origin,origin);
//	printf("%d对应的二进制数为：\n",origin);
//	decimal2binary(origin);
//	return 0;
//}

//04.一个数如果恰好等于它的因子之和，称之为完数，求1000内的完数,并输出因子
//#include <stdio.h>
//int findPerfectNum(int num) {
//	int i;
//	int flag = 0;
//	int sum = 0;
//	for(i=1;i<num;i++){
//		if (num%i==0){//是因子
//			sum += i;
//		}
//	}
//	if (sum == num) flag = 1;
//	return flag;
//}
//void findSon(int num) {
//	int i;
//	for(i=1;i<num;i++){
//		if (num%i==0){//是因子
//			printf("%d ",i);
//		}
//	}
//}
//int main() {
//	int i;
//	for(i=1;i<=1000;i++) {
//		if(findPerfectNum(i)){
//			printf("%d:",i);
//			findSon(i);
//			printf("\n");
//		}
//	}
//	return 0;
//}

//05.输入一个正整数，输出所有的质数因子
//#include <stdio.h>
//int isPrime(int num) {
//	int flag=1,i;
//	if (num==1) {
//		flag=0;
//	}
//	for(i=2;i<num;i++) {
//		if(num%i == 0) flag=0;
//	}
//	return flag;
//}
//int main() {
//	int a;
//	int i;
//	scanf("%d",&a);
//	for(i=1;i<a;i++) {
//		if(a%i==0){//首先判断因子
//			if(isPrime(i)) printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//06.输入20个整数，输出其中能被数组中其他元素整除的那些数组元素

//07.输入两个数组(数组元素自定)，输出两个数组中都出现的元素
//#include <stdio.h>
//
//int main() {
//	int n1,n2;//获取数组长度
//	scanf("%d,%d",&n1,&n2);
//	printf("输入第一个数组元素，共%d个，以空格隔开：",n1);
//	int i;
//	int arr1[n1],arr2[n2];
//	for(i=0;i<n1;i++){
//		scanf("%d",arr1+i);
//	}
//	printf("输入第二个数组元素，共%d个，以空格隔开：",n2);
//	for(i=0;i<n2;i++){
//		scanf("%d",arr2+i);
//	}//数组填充完毕
//	//进行比较
//	int j;
//	for (i=0;i<n1;i++) {
//		for(j=0;j<n2;j++){
//			if(arr1[i]==arr2[j]) printf("%d\n",arr1[i]);
//		}
//	}
//	return 0;
//}

//08.输入两个数组(数组元素自定)，输出只在一个数组中出现的元素
//#include <stdio.h>
//
//int main() {
//	int n1,n2;//获取数组长度
//	scanf("%d,%d",&n1,&n2);
//	printf("输入第一个数组元素，共%d个，以空格隔开：",n1);
//	int i;
//	int arr1[n1],arr2[n2];
//	for(i=0;i<n1;i++){
//		scanf("%d",arr1+i);
//	}
//	printf("输入第二个数组元素，共%d个，以空格隔开：",n2);
//	for(i=0;i<n2;i++){
//		scanf("%d",arr2+i);
//	}//数组填充完毕
//	//进行比较
//	int j;
//	int isSame;
//	//正反两次对比
//	for (i=0;i<n1;i++) {
//		isSame=0;
//		for(j=0;j<n2;j++){
//			if(arr1[i]==arr2[j]) isSame=1;
//		}
//		if(!isSame) printf("%d ",arr1[i]);
//	}
//	for (i=0;i<n2;i++) {
//		isSame=0;
//		for(j=0;j<n1;j++){
//			if(arr2[i]==arr1[j]) isSame=1;
//		}
//		if(!isSame) printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//09.将字符数组s2中的所有字符拷贝到字符数组s1中。\0也要拷贝，\0以后的不拷贝
//#include <stdio.h>
//
//int main() {
//	char s1[20],s2[20]="HELLO HI\0HELLO";
//	int i;
//	for(i=0;i<20;i++) {
//		if(s2[i]!= '\0') {
//			s1[i] = s2[i];
//		} else {
//			s1[i] = s2[i];
//			break;
//		}
//	}
//	printf("%s\n",s1);
//	return 0;
//}

//10. 给定年份，判断该年份是否闰年（定义一个宏）
//能被4整除但是不能被100整除；能被400整除
//#include <stdio.h>
//#define isLeapYear(year) (year%4==0 && year%100!=0 || year%400==0) ? 1 : 0
//
//int main() {
//	printf("%d是否为闰年：%d",1900,isLeapYear(1900));
//}

//11.输入一行小写字母后，或输出原文，或将字母变成下一字母，用条件编译实现选择
//#include <stdio.h>
//
//void encodeCase(char str[]) {
//	int i=0;
//	while('a'<=str[i]&&str[i]<='z'){
//		if(str[i]=='z') {			
//			printf("a");
//		} else {
//			printf("%c",str[i]+1);
//		}
//		i++;
//	}
//}
//
//int main() {
//	printf("输入一行小写字母：");
//	char str[100];
//	scanf("%s",str);
//	printf("原文输出请输入1，加密输出请输入0：");
//	int flag;
//	scanf("%d",&flag);
//	if(flag) {
//		printf("%s\n",str);
//	} else {
//		encodeCase(str);
//	}
//	return 0;
//}

//12.处理n行n列的二维数组，将每一行的元素同除以该行上绝对值最大的元素
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	double a[3][3] = {-3,2,1,3,4,5,-4,5,8};
//	int i,j;
//	double max;
//	for(i=0;i<3;i++) {
//		max = abs(a[i][0]);
//		for(j=0;j<3;j++) {
//			if(max<abs(a[i][j])) max = abs(a[i][j]);
//		}
//		for(j=0;j<3;j++) {
//			a[i][j] /= max;
//		}
//	}
//	for(i=0;i<3;i++) {
//		for(j=0;j<3;j++) {
//			printf("%f\n",a[i][j]);
//		}
//	}
//} 

//13.求任意阶多项式的值:a0+a1x+a2x^2
//#include <stdio.h>
//#include <math.h>
////	while(scanf("%f",&a[i]) != EOF) i++;//输入数据结束想退出循环内时 拍入 组合容键 Ctrl-Z 就是 EOF.
//
//int main() {
//	printf("输入X:");
//	int x;
//	scanf("%d",&x);
//	printf("输入系数，格式如1 2 3，输入0时结束:");
//	float a[10];
//	int i = 0;
//	do {
//		scanf("%f",&a[i]);
//		i++;
//	} while(a[i-1]!=0);//共i-1个系数 
//	int n = i-1;
//	double sum = 0;
//	for(i=0;i<n;i++) {
//		sum += a[i]*pow(x,i);
//	} 
//	printf("%lf\n",sum);
//	return 0;
//} 

//14.给出一个数的原码，能得到该数的补码
//正数的原码、反码、补码相同，负数的原码是在正数的基础上最高位改成1、反码最高位不变，其他取反，补码在反码基础上加1
//所有位运算都是在补码上进行的
// ~a+1 = -a  取反加一正好等于相反数 http://c.biancheng.net/view/290.html

//#include <stdio.h>


//15.求m行n列的数组中全体负数的个数
//#include <stdio.h>
//
//int main() {
//	int arr[3][2] = {-1,-2,-3,-4,5,6};
//	int i,j,count=0;
//	for(i=0;i<3;i++) {
//		for(j=0;j<2;j++) {
//			if(arr[i][j]<0) count++; 
//		}
//	} 
//	printf("%d\n",count);
//} 
 
//16.返回一个数组中出现次数最多的数及其出现次数
#include <stdio.h>

int main() {
	int array[20] = {1,2,3,4,5,6,7,1,2,3,1,2,3};
	int res[2][20];
	int i,j,maxNum=array[0],count=0;
	int flag;
	for(i=0;i<20;i++) {
		flag = 0;
		for(j=0;j<20;j++) {
			if(array[i]==res[0][j]) {
				flag = 1;
				break;
			}
		}
		if(flag) {//出现过 
			
		}
	}
	return 0;
}
