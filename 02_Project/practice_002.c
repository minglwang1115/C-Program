#include <stdio.h>
#include <string.h>

int main() {
	//字符串
	char name[10] = "Hello";
//	char name[10];
//	name = "Hello"; //错误，不能对字符数组直接赋值

	//对比scanf与getchar读取字符 https://blog.csdn.net/xiao_yanci/article/details/80588934
//	char ch1, ch2;
//	scanf("%c", &ch1);
//	scanf("%c", &ch2);
//	printf("%d  %d\n", ch1, ch2);
//	char ch3, ch4;
//	ch3 = getchar();
//	ch4 = getchar();
//	printf("%d  %d\n", ch3, ch4);
	//scanf()和getchar()函数是从输入流缓冲区中读取值的，
	//而并非从键盘(也就是终端)缓冲区读取。而读 取时遇到回车(\n)而结束的，这个\n会一起读入输入流缓冲区的，
	//所以第一次接受输入时取走字符后会留下字符\n，这样第二次的读入函数直接从缓冲区中 把\n取走了，显然读取成功了，所以不会再从终端读取！ 
	//对比scnaf与gets读取字符串
//	char str1[20], str2[20];
//	scanf("%s",str1);//用scanf来读取一个字符串时，字符串中是不可以出现空格的，一旦出现空格，后面的数据就会舍弃残留在缓冲区中。 
//	printf("%s\n",str1);
//	scanf("%s",str2);
//	printf("%s\n",str2);
//	char str1[20], str2[20];
//	gets(str1);//另外一个函数是可以接受空格的，那就是gets() 
//	printf("%s\n",str1);
//	gets(str2);
//	printf("%s\n",str2);

	//指针变量所占用的大小,取决于编译器和系统架构
//	char *a = "hello";
//	printf("%d\n",sizeof(a));
//	printf("%d\n",strlen(a));
//	double *b;
//	printf("%d\n",sizeof(b)); 
//	int *c;
//	printf("%p---%p\n",c,(c+1));

	//逗号表达式
	int a=1,b=2,c=3,x,y;
	y=(x=a+b),(b+c);
	printf("x=%d,y=%d\n",x,y); 
	printf("sizeof(int)=%d\n",sizeof(int));
	float z=3e-5;
	printf("%lf\n",z); 
	return 0;
}
