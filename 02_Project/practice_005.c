#include <stdio.h>

cpystr(char *pss,char *pds) {
	while(*pds++=*pss++);
}
main() {
	//�������󣺶�����ָ���������û��ָ���κα������Ϳ�ʼʹ��ָ��
	char *pa="CHINA",b[10],*pb;
//	char *pa="CHINA",*pb;
	pb=b;
	cpystr(pa,pb);
	char st[]="C Language";
	printf("string a=%s\nstring b=%s\n",pa,pb);
	printf("string st=%s\n",st);
}
