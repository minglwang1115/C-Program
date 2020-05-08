#include <stdio.h>
#define PI 3.1415926

int main()  {
	int a = 12;
	int b = 12;
	float c  = 10.3743; 
	printf("%d,%d\n", --a+b, ++b);//测试printf执行顺序
//	printf("%d\n",strlen("\111")); //1,测试strlen ,当字符串中带有转义字符时，如果符合转义，则按一个字符进行计算，如\n  \ddd, \xdd都是一个字符 
//	printf("%d\n",strlen("\99"));//\99对应8进制，因此是\9  9两个字符 
//	printf("%d\n",strlen("\77"));//1 
//	printf("%d\n",strlen("abc123\99de\n"));//11,
	//测试格式化输出 【flag】[width][.orec][h|L]type
	//flag -左对齐 +在前面放-\+ (space)整数留空 0 用0填充 
//	printf("% 4d\n",a);//  12
//	printf("%04d\n",a);//0012
//	printf("%+4d\n",a);// +12,添加正负号 
//	printf("%-4d0\n",a);//12  0，左对齐，占据4位，后面再接上 
//	printf("%4d\n",a);//  12和（space）作用类似，默认留空 
//	//width 如果是数字，则表示最小字符数（小数点也算一个字符）；如果是*，则表示用下一个参数的值表示最小字符数，类似于占位符的作用 
//	printf("%*.1f\n",5,c);// 10.4
//	printf("%5.1f\n",c);// 10.4
//	//.prec 果是数字，则表示最小字符数（小数点也算一个字符）；如果是*，则表示用下一个参数的值表示最小字符数，类似于占位符的作用 
//	printf("%*.*f\n",8,5,c);//10.37430
//	printf("%8.5f\n",c);//10.37430
//	//L long double;l long; h short
//	//scanf [flag]type
//	scanf("%d%*c%d",&a,&b);//2c4,a=2,b=4,*表示跳过，只读取不存储 
	
	//测试16进制，下面可以得出结论#对于十六进制与八进制来说会加上一个提示符0或者0x来区分进制 
//	int d = 0x41;
//	int e = 041;
//	printf("%d\n",d);//65,输出十进制数
//	printf("%#x\n",d); //ox41  16进制 
//	printf("%#x\n",a); //0xc 16进制 
//	printf("%#x\n",e); //0x21 16进制 
//	printf("%#o\n",d); //0101 8进制 
//	printf("%x\n",d); //41 8进制 
//	printf("%o\n",d); //101 8进制 

	//测试自加与逻辑运算符优先级与短路问题
//	int d = 0;
//	d = a++ || b++;
//	printf("a=%d,b=%d,d=%d\n",a,b,d);//a=13 b=12,说明短路现象，并不是先计算两边
//	int x=1, y=1;
//	int z = -1;
//	d = ++x || ++y && ++z;//实际执行顺序，(++x) || (++y&&++z) ,执行完++x后直接短路 
//	printf("x=%d,y=%d,z=%d,d=%d\n",x,y,z,d); //x=2,y=1,z=-1,d=1
	
//	int o=8,p=7,q=6,x=1;
//	if(o>6)
//	if(p>7)
//	if(q>8) x=2;
//	else x=3;
//	printf("%d\n",x);

//	printf("%lf\n",PI); //3.141593
//	printf("%f\n",PI); //3.141593
//	double d;
//	scanf("%lf",&d);//double
//	printf("%lf\n",d); 

	//测试字符串通过长整型的输出结果 
	char *s = "string";
	printf("%ld",s);//输出十进制地址 
	 
	return 0;
}
