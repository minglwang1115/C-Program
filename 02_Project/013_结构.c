#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
};//ע��ֺ� 

int main(){
//	struct date d1 = {3,10,2020
//	};
//	struct date d2 = {.month=3,.year=2020
//	};  
//	printf("d1.day=%d\n",d1.day);
//	printf("d2.day=%d\n",d2.day); //Ĭ��Ϊ0 
	
	//�ṹ����
	struct date d3;
	d3 = (struct date){3,10,2020};
	struct date today = d3;//��ͬ�����飬���Խ��б�����ֵ 
	today.day = 11;
	printf("d3:%d-%d-%d\n",d3.year,d3.month,d3.day);
	printf("today:%d-%d-%d\n",today.year,today.month,today.day);//today��d3����ָ��ͬһ�� 
	return 0;
} 
