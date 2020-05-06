#include <stdio.h>

int main() {
//	int i;
//	ll: for(i=1; i<5; i++) {
//		if(i==2) {
//			printf("%d\n",i);
//			goto ll;//死循环 
//		}
//	}


	char str1[10];
	char str2[10];
	scanf("%s",str1);//输入11 22 ，读一个连续的字符串 
	printf("%s\n",str1);// 输出11 
	gets(str2);//输入11 22 
	printf("%s\n",str2);//输出11 22，读一行字符串 
} 

//读取两个栅格文件，并相加 
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
