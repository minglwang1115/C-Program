#include<stdio.h>

main(int argc,char *argv[]) {
	//�ļ���д�� E:\GitRepo\C-Program\02_Project\practice_006.exe practice_005.c
	FILE *fp1,*fp2;
	char ch;
	if(argc==1) {
		printf("have not enter file name strike any key exit");
		getch();//getch()��������������ַ���������ʾ��Ļ��,���û�����ĳ���ַ�ʱ,�����Զ���ȡ,���谴�س�
		exit(0);
	}
	if((fp1=fopen(argv[1],"rt"))==NULL) {
		printf("Cannot open %s\n",argv[1]);
		getch();
		exit(1);
	}
	if(argc==2) fp2=stdout;
	else if((fp2=fopen(argv[2],"wt+"))==NULL) {
		printf("Cannot open %s\n",argv[1]);
		getch();
		exit(1);
	}
	while((ch=fgetc(fp1))!=EOF) fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
}

//�Ӽ�����������ѧ�����ݣ�д��һ���ļ��У��ٶ���������ѧ����������ʾ����Ļ�ϡ� 
//struct stu {
//	char name[10];
//	int num;
//	int age;
//	char addr[15];
//} boya[2],boyb[2],*pp,*qq;
//main() {
//	FILE *fp;
//	char ch;
//	int i;
//	pp=boya;
//	qq=boyb;
//	if((fp=fopen("d:\\jrzh\\example\\stu_list","wb+"))==NULL) {//�Զ�д��ʽ�򿪶������ļ���stu_list�� 
//		printf("Cannot open file strike any key exit!");
//		getch();
//		exit(1);
//	}
//	printf("\ninput data\n");
//	for(i=0; i<2; i++,pp++) scanf("%s%d%d%s",pp->name,&pp->num,&pp->age,pp->addr);
//	pp=boya;
//	fwrite(pp,sizeof(struct stu),2,fp);
//	rewind(fp);
//	fread(qq,sizeof(struct stu),2,fp);
//	printf("\n\nname\tnumber age addr\n");
//	for(i=0; i<2; i++,qq++) printf("%s\t%5d%7d %s\n",qq->name,qq->num,qq->age,qq->addr);
//	fclose(fp);
//}
