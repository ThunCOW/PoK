#include <stdio.h>
#include <avltree.h>

 int Ekle(int k, avltree* l){
        l->ds = l->add(k, l->ds);
    return 0;
}

int main()
{
    avltree* c=avlnew();
    Ekle(7,c);
    Ekle(4,c);
    Ekle(1,c);
    Ekle(8,c);
    Ekle(5,c);
    Ekle(2,c);
    Ekle(9,c);
    Ekle(6,c);
    Ekle(3,c);
    Ekle(0,c);
    c->print(c->ds);
    //display_avl(c->ds);
    printf("deneme \n");

    /*node *t;
    int i;
    int j = 0;
    const int max = 10;
 
    printf("--- C AVL Tree Demo  ---\n");
 
    t = NULL;
 
    printf("Insert: ");
    for(i = 0; i < max; i++)
    {
        j = ( j + 7 ) % max;
        t = insert( j, t );
        printf("%d ",j);
 
    }
    printf(" into the tree\n\n");
 
    display_avl(t);
 
    dispose(t);*/
 
    return 0;
}

/*
int main()
{
    node *t ;
    int i;
    int j = 0;
    const int max = 10;
 
    printf("--- C AVL Tree Demo  ---\n");
 
    t = NULL;
 
    printf("Insert: ");
    for( i = 0; i < max; i++, j = ( j + 7 ) % max )
    {
 
        t = insert( j, t );
        printf("%d ",j);
 
    }
    printf(" into the tree\n\n");
 
    display_avl(t);
 
    dispose(t);
 
    return 0;
}*/