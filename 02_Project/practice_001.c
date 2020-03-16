#include <stdio.h>

int main() {
//	char *a = "he";
//	char *s;
//	s = a;
//	int cnt = 1;
//	while(*s++) {
//		printf("%d:",cnt++); 
//		printf("%s\n",s);
//	};
//	printf("%d\n",s-a);
//	printf("%d\n",sizeof(a));
	
	char a,b,c,d;
	scanf("%c %c",&a,&b);
	c=getchar();
	d=getchar();
	printf("%c%c%c%c\n",a,b,c,d);
	return 0;
}
