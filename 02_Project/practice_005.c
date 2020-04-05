#include <stdio.h>

cpystr(char *pss,char *pds) {
	while(*pds++=*pss++);
}
main() {
	//常见错误：定义了指针变量，还没有指向任何变量，就开始使用指针
	char *pa="CHINA",b[10],*pb;
//	char *pa="CHINA",*pb;
	pb=b;
	cpystr(pa,pb);
	char st[]="C Language";
	printf("string a=%s\nstring b=%s\n",pa,pb);
	printf("string st=%s\n",st);
}
