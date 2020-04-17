#include <stdio.h>

cpystr(char *pss,char *pds) {
	while(*pds++=*pss++);
}
main() {
	//常见错误：定义了指针变量，还没有指向任何变量，就开始使用指针
//	char *pa="CHINA",b[10],*pb;
////	char *pa="CHINA",*pb;
//	pb=b;
//	cpystr(pa,pb);
//	char st[]="C Language";
//	printf("string a=%s\nstring b=%s\n",pa,pb);
//	printf("string st=%s\n",st);

	//输出%d
//	printf("\%\n");//无效
//	printf("%%d\n");//正常

	//格式字符串输入
//	int a,b,c;
//	scanf("%d,%d%d",&a,&b,&c);
//	printf("%d--%d--%d",a,b,c); 
	double a = 123.456;
	printf("%6.2f\n",a);
	printf("%6.1f\n",a);
}
