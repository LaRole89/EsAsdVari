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
/*/
Tree emptyThree();

void stampaAlbero(Tree tree);

void stampaInOrder(Tree tree);

void stampaPostOrder(Tree tree);

void stampaPreOrder(Tree tree);
*/
#ifdef	__cplusplus
}

#endif

#endif	/* TREE_H */

