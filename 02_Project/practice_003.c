#include <stdio.h> 

int max(int a,int b) {
	if(a>b)return a;
	else return b;
}
int main() {
//	int max(int a,int b);
	int x,y,z;
	printf("input two numbers:\n");
	scanf("%d%d",&x,&y);
	z=max(x,y);
	printf("maxmum=%d\n",z);
	int a[5];
	printf("sizeof(a)=%d\n",sizeof(a));//20   5*4
	return 0;//main函数会自动补足return 0 
}
