#include <stdio.h>

int main(){
    FILE * fp = fopen("014_max.o","r");
    if(fp) {
        int num;
        fscanf(fp,"%d",&num);
        printf("%d",num);
        fclose(fp);
    } else {
        printf("�޷����ļ�");
    }
    return 0;
}
