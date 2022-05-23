/*************************************************************************
	> File Name: list_2nd.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Sun 07 Mar 2021 01:51:11 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * struct list_node 
 * ---------------------------
 * | int val                 |
 * ---------------------------
 * | struct list_node *next  |
 * ---------------------------
 */

struct list_node {
	int val;
	struct list_node *next;
};

int list_itor(struct list_node **root)
{
	struct list_node **curr, *entry;
	curr = root;

	while((entry = *curr) != NULL) {     ///< *curr point is the value of next field, aka the address of next list_node 
		printf("<%p> val %d next %p &next %p, ", entry, entry->val, entry->next, &entry->next);
		curr = &entry->next;             ///< curr point to next field address of current list_node
	}
	printf("\n");

	return 0;
}

int list_insert(struct list_node **root, int val)
{
	struct list_node **curr;
	struct list_node *entry, *_new;

	curr = root;
	
	while((entry = *curr) != NULL && (entry->val < val)) { ///< *curr point is the value of next field, aka the address of next list_node 
		curr = &entry->next;                               ///< curr point to next field address of current list_node
	}

	_new = (struct list_node *)malloc(sizeof(struct list_node));

	_new->next = entry;
	_new->val = val;

	*curr = _new;

	return 0;
}

int list_delete(struct list_node **root, int val)
{
	struct list_node **curr, *entry;

	curr = root;

	while((entry = *curr) != NULL) {  ///< *curr point is the value of next field, aka the address of next list_node 
		if (entry->val != val) {
			curr = &entry->next;      ///< curr point to next field address of current list_node
		} else {
			fprintf(stderr, "got it!\n");
			break;
		}
	}	
	*curr = entry->next;              ///< save entry->next to next field address of curr point
	
	free(entry);

	return 0;
}

int list_reverse(struct list_node **root)
{
	struct list_node *cur = *root, *entry, *head = *root;

	while ((entry = cur) != NULL) {
		cur = entry->next;
		entry->next = head;
		head = entry;
	}
	(*root)->next = NULL;
	*root = head;

	return 0;
}

int main()
{
	struct list_node *root = NULL;
	
	for (int i = 0; i < 10; i++) {
		list_insert(&root, i + 1);
	}

	list_itor(&root);
	list_delete(&root, 5);
	list_itor(&root);

	list_reverse(&root);
	list_itor(&root);

	return 0;
}



