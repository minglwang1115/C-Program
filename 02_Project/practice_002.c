#include <stdio.h>
#include <string.h>

int main() {
	//�ַ���
	char name[10] = "Hello";
//	char name[10];
//	name = "Hello"; //���󣬲��ܶ��ַ�����ֱ�Ӹ�ֵ

	//�Ա�scanf��getchar��ȡ�ַ� https://blog.csdn.net/xiao_yanci/article/details/80588934
//	char ch1, ch2;
//	scanf("%c", &ch1);
//	scanf("%c", &ch2);
//	printf("%d  %d\n", ch1, ch2);
//	char ch3, ch4;
//	ch3 = getchar();
//	ch4 = getchar();
//	printf("%d  %d\n", ch3, ch4);
	//scanf()��getchar()�����Ǵ��������������ж�ȡֵ�ģ�
	//�����ǴӼ���(Ҳ�����ն�)��������ȡ������ ȡʱ�����س�(\n)�������ģ����\n��һ������������������ģ�
	//���Ե�һ�ν�������ʱȡ���ַ���������ַ�\n�������ڶ��εĶ��뺯��ֱ�Ӵӻ������� ��\nȡ���ˣ���Ȼ��ȡ�ɹ��ˣ����Բ����ٴ��ն˶�ȡ�� 
	//�Ա�scnaf��gets��ȡ�ַ���
//	char str1[20], str2[20];
//	scanf("%s",str1);//��scanf����ȡһ���ַ���ʱ���ַ������ǲ����Գ��ֿո�ģ�һ�����ֿո񣬺�������ݾͻ����������ڻ������С� 
//	printf("%s\n",str1);
//	scanf("%s",str2);
//	printf("%s\n",str2);
//	char str1[20], str2[20];
//	gets(str1);//����һ�������ǿ��Խ��ܿո�ģ��Ǿ���gets() 
//	printf("%s\n",str1);
//	gets(str2);
//	printf("%s\n",str2);

	//ָ�������ռ�õĴ�С,ȡ���ڱ�������ϵͳ�ܹ�
//	char *a = "hello";
//	printf("%d\n",sizeof(a));
//	printf("%d\n",strlen(a));
//	double *b;
//	printf("%d\n",sizeof(b)); 
//	int *c;
//	printf("%p---%p\n",c,(c+1));

	//���ű��ʽ
	int a=1,b=2,c=3,x,y;
	y=(x=a+b),(b+c);
	printf("x=%d,y=%d\n",x,y); 
	printf("sizeof(int)=%d\n",sizeof(int));
	float z=3e-5;
	printf("%lf\n",z); 
	return 0;
}
