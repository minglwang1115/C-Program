#include <stdio.h>

//��дstrcmp 
int mystrcmp(char *s1, char *s2) {
    int idx = 0;
    int result;
    while(s1[idx] == s2[idx]) {
        idx++;
        if(s1[idx] == '\0' || s2[idx] == '\0') break;
    }
    result = s1[idx] - s2[idx];
    return result;
}

//��дstrcpy
char * mycpy(char *dst, const char *src) {
	char *ret = dst; 
    while(*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';//����ֱ�ӷ���dst����Ϊdst��ַ������ 
    return ret;
} 

int main() {
//	char string[8];
//	scanf("%s",string);
//	printf("%s",string);

	//�Ƚ�a,b��ַ�Ƿ���ͬ��ab���Ǳ��ر����������ַ���������˵�ַ��ͬ 
//	char a[] = "123";
//	char b[] = "123";
//	printf("%d\n",a); 
//	printf("%d\n",b);
  
	
	char s1[] = "abc";
	char s2[] = "bbc";
	char s3[] = "";
//	printf("%d", mystrcmp(s1,s2));
	printf("%s",mycpy(s3,s1));
	
	return 0;
}
