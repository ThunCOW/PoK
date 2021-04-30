#ifndef SKPL_H
#define SKPL_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define SKIPLIST_MAX_LEVEL 6

typedef struct snode {
    int key;
    int value;
    struct snode **forward;
} snode;

typedef struct skiplist {
    int level;
    int size;
    struct snode *header;
} skiplist;

skiplist* skiplist_init(skiplist *list);
int skiplist_insert(skiplist *list, int key, int value);
snode *skiplist_search(skiplist *list, int key);
int skiplist_delete(skiplist *list, int key);
void skiplist_dump(skiplist *list);

/*typedef struct BST {
    int key;
    struct BST *left;
    struct BST *right;
    int height;
}bst_t;*/

/*typedef struct BSTree {
    bst_t* ds;
    bst_t* (*init)();
    bst_t* (*ekle)();
    void (*max)();
    void (*print)();
}bstree;*/

/*bstree* bstnew(void);
bst_t* bstinit(int);
bst_t* bstekle(bst_t* a, int k);
void bstmax(bst_t* tree);
void bstprint(bst_t* tree);*/

#endif // SKPL_H

