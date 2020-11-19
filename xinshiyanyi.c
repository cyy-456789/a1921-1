#include <stdio.h>
#include <malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
} LinkList;
//创建链表
LinkList* 
