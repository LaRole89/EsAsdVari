/* 
 * File:   Tree.h
 * Author: Diego
 *
 * Created on 26 maggio 2014, 2.03
 */

#ifndef TREE_H
#define	TREE_H

#ifdef	__cplusplus
extern "C" {
#endif
    
typedef struct node{
    int val;
    struct node *left;
    struct node *right;
}Node;

typedef Node* Tree;

/* functionTree *//**/
Tree emptyThree();
int IsEmpty(Tree t);
Tree createNode(int key, Tree figlioSx, Tree figlioDx);
void stampaInOrder(Tree tree);
void stampaPostOrder(Tree tree);
void stampaPreOrder(Tree tree);
Tree creaAlbero(int *a, int i, int f);
void print_at_level(Tree node, int desired, int current);

    // ABR (Albero Binario di Ricerca //  
Tree addABRnode(int key, Tree t);
Tree createABRtoARRAY(int *a, int dim, Tree tree);
Tree ABRsearch(Tree tree, int k);
int isInABR(Tree tree, int k);
Tree ABRgetMAX(Tree tree);
Tree ABRgetMIN(Tree tree);
int maxHeight(Tree tree);
void printLevel(Tree p, int level);
void printLevelOrder(Tree tree);
Tree predecessore(Tree tree, int k);
/**/


#ifdef	__cplusplus
}

#endif

#endif	/* TREE_H */

