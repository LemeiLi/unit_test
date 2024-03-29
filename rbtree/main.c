/*************************************************************************
	> File Name: rb_test.c
	> Author: Caesar
	> Email: v.manstein@qq.com 
	> Created Time: Fri 19 Aug 2022 03:57:47 PM CST
 ************************************************************************/
/*
 * 使用 kernel 中的 rbtree_test.c 进行测试更好，其产生随机数据，并记录查找时间
*/
#include <stdio.h>
#include <stdlib.h>
#include "rbtree.h"

struct test_node {
    int key;
    struct rb_node rb;
    int val;
};

static struct rb_root_cached rbtree_root = RB_ROOT_CACHED;
static struct test_node *nodes = NULL;

static void insert_cached(struct test_node *node, struct rb_root_cached *root)
{
    struct rb_node **new = &root->rb_root.rb_node, *parent = NULL;
    int key = node->key;
    bool leftmost = true;

    while (*new) {
        parent = *new;
        if (key < rb_entry(parent, struct test_node, rb)->key) {
            new = &parent->rb_left;
        } else {
            new = &parent->rb_right;
            leftmost = false; //只要一次往右找了，新节点node就不可能是leftmost节点了
        }
    }

    rb_link_node(&node->rb, parent, new);
    rb_insert_color_cached(&node->rb, root, leftmost);
}

struct test_node *search_cached(struct rb_root_cached *root, int key) {
    struct test_node *node_target = NULL;
    struct rb_node **new = &root->rb_root.rb_node, *parent = NULL;

    while (*new) {
        parent = *new;
        node_target = rb_entry(parent, struct test_node, rb);
        if (key < node_target->key) {
            new = &parent->rb_left;
        } else if (key > node_target->key) {
            new = &parent->rb_right;
        } else {
            return node_target;
        }
    }

    return NULL;
}
 
static void erase_cached(struct test_node *node, struct rb_root_cached *root)
{
    rb_erase_cached(&node->rb, root);
}

static void test_init(struct rb_root_cached *root, int num) {
    int i, key, val;

    nodes = (struct test_node *)calloc(num, sizeof(struct test_node));
    if (!nodes) {
        exit(-1);
    }

    printf("insert:\n");    
    for (i = 0; i < num; i++) {
        key = rand() % (num * 100);
        val = rand() % (num * 100);
        nodes[i].key = key;
        nodes[i].val = val;
        insert_cached(&nodes[i], root);
        printf("key=%d, val=%d\n", key, val);    
    }
}

static void test_interator(struct rb_root_cached *root) {
    struct test_node *pos, *n;

    printf("\ninterator:\n");
    rbtree_postorder_for_each_entry_safe(pos, n, &root->rb_root, rb) {
        printf("key=%d, val=%d\n", pos->key, pos->val);    
    }
    
    pos = container_of(root->rb_leftmost, struct test_node, rb);
    printf("leftmost->key=%d, leftmost->val=%d\n", pos->key, pos->val);    
}

static void test_interator_self_define(struct rb_root_cached *root) {
    struct rb_node *rn;
    struct test_node *pos;

    printf("\nspecial_pos:\n");
    rn = rb_first(&root->rb_root);
    pos = container_of(rn, struct test_node, rb);
    printf("first: key=%d, val=%d\n", pos->key, pos->val);

    rn = rb_next(rn);
    pos = container_of(rn, struct test_node, rb);
    printf("next: key=%d, val=%d\n", pos->key, pos->val);

    rn = rb_last(&root->rb_root);
    pos = container_of(rn, struct test_node, rb);
    printf("last: key=%d, val=%d\n", pos->key, pos->val);

    rn = rb_prev(rn);
    pos = container_of(rn, struct test_node, rb);
    printf("prev: key=%d, val=%d\n", pos->key, pos->val);

    printf("\ninterator_self:\n");
    rn = rb_first(&root->rb_root);
    while(rn) {
        rn = rb_next(rn);
        if (rn) {
            pos = container_of(rn, struct test_node, rb);
            printf("key=%d, val=%d\n", pos->key, pos->val);
        }
    }
}

static void test_search_erase(struct rb_root_cached *root, int num)
{
    int i;
    struct test_node *node;
    
    //删除key值落在前50%的节点
    printf("\ndelete:\n");
    for (i = 0; i < num * 100 / 2; i++) {
        node = search_cached(root, i);
        if (node) {
            printf("key=%d, val=%d\n", node->key, node->val);
            erase_cached(node, root);
        }
    }
}

int main(int argc, char *argv[])
{
    int num = 100;

    if (argc == 2) {
        num = atoi(argv[1]);
    }

    test_init(&rbtree_root, num);
    test_interator(&rbtree_root);
    test_interator_self_define(&rbtree_root);
    test_search_erase(&rbtree_root, num);
    test_interator(&rbtree_root);

    free(nodes);

    return 0;
}
