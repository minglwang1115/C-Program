#include <stdio.h>

cpystr(char *pss,char *pds) {
	while(*pds++=*pss++);
}
main() {
	//�������󣺶�����ָ���������û��ָ���κα������Ϳ�ʼʹ��ָ��
	char *pa="CHINA",b[10],*pb;
	pa = "HELLO";//���Ըı�pָ��ĵ�ַ�����ǲ���ͨ��*p�ı�����Ԫ�أ���Ϊ��ʼ��ʱָ���˳�����ʵ��Ϊconst char * 
//	char *pa="CHINA",*pb;
	pb=b;
	cpystr(pa,pb);
	char st[]="C Language";
	printf("string a=%s\nstring b=%s\n",pa,pb);
	printf("string st=%s\n",st);

	//���%d
//	printf("\%\n");//��Ч
//	printf("%%d\n");//����

	//��ʽ�ַ�������
//	int a,b,c;
//	scanf("%d,%d%d",&a,&b,&c);
//	printf("%d--%d--%d",a,b,c); 
	double a = 123.456;
	printf("%6.2f\n",a);
	printf("%6.1f\n",a);
}
