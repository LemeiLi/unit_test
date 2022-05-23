/*************************************************************************
	> File Name: list.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Wed 06 May 2020 11:24:24 AM CST
 ************************************************************************/

#include<stdio.h>


struct list_node {
	struct list_node *pnext;
	int key;
};

void list_init(struct list_node* head)
{
	head->pnext = head;	
	head->key = 0;
}

void list_insert(struct list_node* cur, struct list_node* node)
{
	struct list_node *temp;
	temp = cur->pnext;
	cur->pnext = node;
	node->pnext = temp;
}

void list_insert_head(struct list_node* head, struct list_node* node)
{
	list_insert(head, node);
}

void list_insert_tail(struct list_node* head, struct list_node* node)
{
	struct list_node* cur = head;

	while (cur->pnext != head) {
		cur = cur->pnext;
	}
		
	list_insert(cur, node);
}

void list_iterator(struct list_node* head)
{
	struct list_node* itor; 

	printf("list:");
	for (itor = head->pnext; itor != head; itor = itor->pnext) {
		printf(" %d", itor->key);
	}
	printf("\n");
}

void list_del(struct list_node* head, int key)
{
	struct list_node* cur = head;
	
	while (cur->pnext->key != key) {
		cur = cur->pnext;	
	}
	
	cur->pnext = cur->pnext->pnext;
}


int main()
{
	struct list_node list;
	list_init(&list);

	struct list_node node1, node2, node3;
	node1.key = 1, node2.key = 2, node3.key = 3;

	list_insert_head(&list, &node1);
	list_insert_head(&list, &node2);
	list_insert_head(&list, &node3);

	list_iterator(&list);
	list_del(&list, 2);
	list_iterator(&list);


	return 0;
}




