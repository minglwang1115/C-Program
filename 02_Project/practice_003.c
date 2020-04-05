#include <stdio.h>

int max(int a,int b) {
	if(a>b)return a;
	else return b;
}
int main() {
//	int max(int a,int b);
//	int x,y,z;
//	printf("input two numbers:\n");
//	scanf("%d%d",&x,&y);
//	z=max(x,y);
//	printf("maxmum=%d\n",z);
//	int a[5];
//	printf("sizeof(a)=%d\n",sizeof(a));//20   5*4

	//指针
////	int x=1;
////	int *p = &x;
//	int x[2]={1,2};
//	int *p = x;
//	int y;
//	printf("%d\n",p);
////	y = ++*p;//相当于++(*p)
//	y= *p++;//相当于*(p++)
//	printf("p的地址：%d；p指向的值%d\n",p,*p);
//	printf("%d",y);

//	int *p1,*p2,*p,a,b;
//	scanf("%d,%d",&a,&b);
//	p1=&a;
//	p2=&b;
//	if(a<b) {
//		p=p1;
//		p1=p2;
//		p2=p;
//	}
//	printf("\na=%d,b=%d\n",a,b);
//	printf("max=%d,min=%d\n",*p1, *p2);
	//printf("%d\n", 6++);//ERROR lvalue required as increment operand
	return 0;//main函数会自动补足return 0
}
