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
}Node, *Node_pt;

Node_pt emtptyThree();

Node_pt creaAlbero(int key, Node_pt figlioSx, Node_pt figlioDx);

void stampaAlbero(Node_pt tree);

void stampaInOrder(Node_pt tree);

void stampaPostOrder(Node_pt tree);

void stampaPreOrder(Node_pt tree);

#ifdef	__cplusplus
}

#endif

#endif	/* TREE_H */

