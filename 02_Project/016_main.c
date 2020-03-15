#include <stdio.h>
#include <stdlib.h>
#include "016_node.h"

//typedef struct _node {
//	int value;
//	struct _node *next; //此处不使用Node *next原因是Node尚未定义完成
//} Node;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct _list {
	Node *head;
} List;
void print(List *pList);
void add(int number,List *pList);

int main(int argc, char *argv[]) {
//	Node *head = NULL;
	List list;
	list.head = NULL;
	int number;
	do {
		scanf("%d",&number);
		if(number != -1) {
			add(number,&list);
		}
	} while(number != -1);
	print(&list);

	//查找指定数
	int isFound = 0;
	for(p=list.head; p; p=p->next) {
		if(p->value == number) {
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}
	if(!isFound) {
		printf("没找到\n");
	}
	//删除指定数
	Node *q;
	for(q=NULL,p=list.head; p; q=p, p=p->next) {
		if(p->value == number) {
			if(q) {
				q->next = p->next;
			} else {
				list.head = p->next;
			}
			free(p);
			break;
		}
	}
	return 0;
}

void add(int number,List *pList) {
	//add to linked-list,先创建节点
	Node *p = (Node*)malloc(sizeof(Node));
	p->next = NULL;
	p->value = number;
	//find the last，找到最后节点
	Node *last = pList->head;
	if(last) {
		while(last->next) { //直到next为null，即为最后节点
			last = last->next;
		}
		//attach，追加
		last->next = p;
	} else {
		pList->head = p;
	}
}

void print(List *pList) {
	Node *p;
	for(p=pList->head; p; p=p->next) {
		printf("%d\t",p->value);
	}
	printf("\n");
}
