#include <stdio.h>

//int main() {
//	enum COLOR {RED=1,YELLOW,GREEN=5};
//	enum COLOR c = 0;
//	//��ʹ��ö�����͵ı����������ڵ�����ֵҲû���κ� warning��error
//	printf("%d\n",GREEN);
//	printf("%d\n",c); 
//	return 0;
//}

enum color {red,yellow,green};
void f(enum color c);
int main() {
	enum color t =red;//ö����������Ϊֵ 
	scanf("%d",&t);
	f(t);
	return 0;
} 
void f(enum color c){//ö�����Ϳ��Ը���enum��Ϊ���ͣ�enum color 
	printf("%d\n",c);//ʵ�����������������ڲ�������ⲿ��������� 
}
