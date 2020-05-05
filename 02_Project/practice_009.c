#include <stdio.h>

//fun(char *w,int n) {
//	char t,*s1,*s2;
//
//	s1=w;
//	s2=w+n-1;
//	while(s1<s2) {
//		t=*s1++;
//		*s1=*s2--;
//		*s2=t;
//	}
//}
//void main() {
//	char *p;
//	p="1234567";
//	fun(p,strlen(p));
//	puts(p);
//	getchar();
//}

//int fun(char *p) {
//	return p;
//}
//int main() {
//	char *p = "1111";
//	int res;
//	res = fun(p);
//	printf("%#x\n",res);
//}

//union myun {
//	struct {
//		int x,y,z;
//	} u;
//	int k;	
//} a;
//int main() {
//	a.u.x = 4;
//	a.u.y = 5;
//	a.u.z = 6;
//	a.k = 0;
//	printf("%d",a.u.x);//0 union中同一时间只有一个有效 
//	return 0;
//}

//struct HAR{
//	int x,y;
//	struct HAR *p;
//} h[2];
//main() {
//	h[0].x=1;
//	h[0].y=2;
//	h[1].x=3;
//	h[1].y=4;
//	h[0].p = h[1].p = h;
//	printf("%d,%d\n",(h[0].p)->x,(h[1].p)->y);
//}

//main() {
//	union{
//		unsigned char c;
//		unsigned int i[4];
//	} z;
//	z.i[0] = 0x39;
//	z.i[1] = 0x36;
//	printf("%c\n",z.c);
//	printf("sizeof(z)=%d,sizeof(char)=%d,sizeof(int i[4])=%d\n",sizeof(z),sizeof(z.c),sizeof(z.i));//16 1 16（4*4） 
//	printf("%c\n",65);//A 
//} 

//main() {
//	typedef union {
//		long i;
//		int k[5];
//		char c;
//	} DATE;
//	struct date{
//		int cat;
//		DATE cow;
//		double dog; 
//	} too;
//	DATE max;
//	printf("sizeof(long)=%d,sizeof(int)=%d,sizeof(short)=%d\n",sizeof(long),sizeof(int),sizeof(short));//4 4 2 
//	printf("sizeof(max)=%d,sizeof(int)=%d\n",sizeof(max),sizeof(struct date));//20 32
//}

//main() {
//	union{
//		char i[2];
//		int k;
//	} r;
//	r.i[0] = 2;
//	r.i[1] = 0;
//	printf("%d\n",r.k);	//r.i[1] = 0时是2；r.i[1] = 1时是 258 
//}

//struct n{
//	int x;
//	char c;
//}; 
//main() {
//	struct n a = {
//		10,'x'
//	};
//	func(a);
//	printf("%d,%c",a.x,a.c);
//}
//func(struct n b){
//	b.x = 20;
//	b.c='y';
//}

//测试共用体，内存共用对成员的影响
//main() {
////	union{
////		int a;
////		long b;
////		unsigned char c;
////	}m;
////	m.b = 0x12345678;
////	printf("%x,%x\n",m.a,m.c);
//	
//	union{
//		int a[2];
//		long b;
//		char c[4];
//	}s;
//	s.a[0]=0x39;
//	s.a[1]=0x38;
//	printf("%lx,%c",s.b,s.c[0]);
//} 

main() {
	struct sk{
		int n;
		float x;
	}data, *p;
	p = &data.n;
	p = (struct sk *)&data.n;
	int r = 12|012;
	printf("%d\n",r);//14
} 
