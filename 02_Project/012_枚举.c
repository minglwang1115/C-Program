#include <stdio.h>

//int main() {
//	enum COLOR {RED=1,YELLOW,GREEN=5};
//	enum COLOR c = 0;
//	//即使给枚举类型的变量赋不存在的整数值也没有任何 warning或error
//	printf("%d\n",GREEN);
//	printf("%d\n",c); 
//	return 0;
//}

enum color {red,yellow,green};
void f(enum color c);
int main() {
	enum color t =red;//枚举量可以作为值 
	scanf("%d",&t);
	f(t);
	return 0;
} 
void f(enum color c){//枚举类型可以跟上enum作为类型：enum color 
	printf("%d\n",c);//实际上是以整数来做内部计算和外部输入输出的 
}
