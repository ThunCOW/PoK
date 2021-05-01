#ifndef AVLTREE_H_INCLUDED
#define AVLTREE_H_INCLUDED

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
    int height;
}node;

typedef struct AVLtree {
    node* ds;
    //node* (*init)();
    node* (*add)();
    //void (*max)();
    void (*print)();
}avltree;
 
avltree* avlnew(void);
 //test2
void dispose(node* t);
node* find( int e, node *t );
node* find_min( node *t );
node* find_max( node *t );
node* insert( int data, node *t );
//node* delete( int data, node *t );
void display_avl(node* t);
int get( node* n );
#endif // AVLTREE_H_INCLUDED