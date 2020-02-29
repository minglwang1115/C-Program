#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    printf("请输入数量：\n");
    scanf("%d", &number);
    printf("number=%d",number);
    int *p;
	p = (int*)malloc(number*sizeof(int));
    for(int i=0;i<number;i++) {
        scanf("%d", &p[i]);
    }
    for(int j=0;j<number;j++) {
        printf("%d", p[j]);
    }
    free(p);

//	int *p;
//	int cnt = 0;
//	while((p=malloc(100*1024*1024))) {
//		cnt++;
//	}
//	printf("共分配了%d00M",cnt);
    return 0;
}
