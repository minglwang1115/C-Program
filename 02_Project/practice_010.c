//00.����a=a++;
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
//#include <stdio.h>
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
//
//int main() {
//	int origin;
//	scanf("%d",&origin);
//	printf("%d��Ӧ��ʮ��������Ϊ��%#x\n",origin,origin);
//	printf("%d��Ӧ�Ķ�������Ϊ��\n",origin);
//	decimal2binary(origin);
//	return 0;
//}

//04.һ�������ǡ�õ�����������֮�ͣ���֮Ϊ��������1000�ڵ�����,���������
//#include <stdio.h>
//int findPerfectNum(int num) {
//	int i;
//	int flag = 0;
//	int sum = 0;
//	for(i=1;i<num;i++){
//		if (num%i==0){//������
//			sum += i;
//		}
//	}
//	if (sum == num) flag = 1;
//	return flag;
//}
//void findSon(int num) {
//	int i;
//	for(i=1;i<num;i++){
//		if (num%i==0){//������
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

//05.����һ����������������е���������
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
//		if(a%i==0){//�����ж�����
//			if(isPrime(i)) printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//06.����20����������������ܱ�����������Ԫ����������Щ����Ԫ��

//07.������������(����Ԫ���Զ�)��������������ж����ֵ�Ԫ��
//#include <stdio.h>
//
//int main() {
//	int n1,n2;//��ȡ���鳤��
//	scanf("%d,%d",&n1,&n2);
//	printf("�����һ������Ԫ�أ���%d�����Կո������",n1);
//	int i;
//	int arr1[n1],arr2[n2];
//	for(i=0;i<n1;i++){
//		scanf("%d",arr1+i);
//	}
//	printf("����ڶ�������Ԫ�أ���%d�����Կո������",n2);
//	for(i=0;i<n2;i++){
//		scanf("%d",arr2+i);
//	}//����������
//	//���бȽ�
//	int j;
//	for (i=0;i<n1;i++) {
//		for(j=0;j<n2;j++){
//			if(arr1[i]==arr2[j]) printf("%d\n",arr1[i]);
//		}
//	}
//	return 0;
//}

//08.������������(����Ԫ���Զ�)�����ֻ��һ�������г��ֵ�Ԫ��
//#include <stdio.h>
//
//int main() {
//	int n1,n2;//��ȡ���鳤��
//	scanf("%d,%d",&n1,&n2);
//	printf("�����һ������Ԫ�أ���%d�����Կո������",n1);
//	int i;
//	int arr1[n1],arr2[n2];
//	for(i=0;i<n1;i++){
//		scanf("%d",arr1+i);
//	}
//	printf("����ڶ�������Ԫ�أ���%d�����Կո������",n2);
//	for(i=0;i<n2;i++){
//		scanf("%d",arr2+i);
//	}//����������
//	//���бȽ�
//	int j;
//	int isSame;
//	//�������ζԱ�
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

//09.���ַ�����s2�е������ַ��������ַ�����s1�С�\0ҲҪ������\0�Ժ�Ĳ�����
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

//10. ������ݣ��жϸ�����Ƿ����꣨����һ���꣩
//�ܱ�4�������ǲ��ܱ�100�������ܱ�400����
//#include <stdio.h>
//#define isLeapYear(year) (year%4==0 && year%100!=0 || year%400==0) ? 1 : 0
//
//int main() {
//	printf("%d�Ƿ�Ϊ���꣺%d",1900,isLeapYear(1900));
//}

//11.����һ��Сд��ĸ�󣬻����ԭ�ģ�����ĸ�����һ��ĸ������������ʵ��ѡ��
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
//	printf("����һ��Сд��ĸ��");
//	char str[100];
//	scanf("%s",str);
//	printf("ԭ�����������1���������������0��");
//	int flag;
//	scanf("%d",&flag);
//	if(flag) {
//		printf("%s\n",str);
//	} else {
//		encodeCase(str);
//	}
//	return 0;
//}

//12.����n��n�еĶ�ά���飬��ÿһ�е�Ԫ��ͬ���Ը����Ͼ���ֵ����Ԫ��
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

//13.������׶���ʽ��ֵ:a0+a1x+a2x^2
//#include <stdio.h>
//#include <math.h>
////	while(scanf("%f",&a[i]) != EOF) i++;//�������ݽ������˳�ѭ����ʱ ���� ����ݼ� Ctrl-Z ���� EOF.
//
//int main() {
//	printf("����X:");
//	int x;
//	scanf("%d",&x);
//	printf("����ϵ������ʽ��1 2 3������0ʱ����:");
//	float a[10];
//	int i = 0;
//	do {
//		scanf("%f",&a[i]);
//		i++;
//	} while(a[i-1]!=0);//��i-1��ϵ�� 
//	int n = i-1;
//	double sum = 0;
//	for(i=0;i<n;i++) {
//		sum += a[i]*pow(x,i);
//	} 
//	printf("%lf\n",sum);
//	return 0;
//} 

//14.����һ������ԭ�룬�ܵõ������Ĳ���
//������ԭ�롢���롢������ͬ��������ԭ�����������Ļ��������λ�ĳ�1���������λ���䣬����ȡ���������ڷ�������ϼ�1
//����λ���㶼���ڲ����Ͻ��е�
// ~a+1 = -a  ȡ����һ���õ����෴�� http://c.biancheng.net/view/290.html

//#include <stdio.h>


//15.��m��n�е�������ȫ�帺���ĸ���
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
 
//16.����һ�������г��ִ���������������ִ���
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
		if(flag) {//���ֹ� 
			
		}
	}
	return 0;
}
