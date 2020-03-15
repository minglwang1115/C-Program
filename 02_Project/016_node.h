#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
	int value;
	struct _node *next; //此处不使用Node *next原因是Node尚未定义完成 
} Node;

#endif
