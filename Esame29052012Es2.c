/*
 * Dato un array di n interi, progettare un algoritmo efficiente che costruisca un albero binario di
 * ricerca di altezza Θ(log n) che contenga gli interi dell’array come chiavi, e analizzarne la
 * complessità.
 * 
 * Devono essere definite esplicitamente eventuali funzioni/procedure ausiliarie. Si consideri la
 * rappresentazione dell’albero binario che utilizza i campi left, right e key.
 *
#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

/* 
 * File:   Test.c
 * Author: Diego
 *
 * Created on 24 maggio 2014, 19.37
 */

#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"
/*
 * 
 */
/* quickSort */
//extern void quickSort(int x[], int first, int last);
//extern int partition(int y[], int f, int l);

/* Esame 30 05 2013 es 2*/
//extern int algoritmo(int a[], int k, int alength);



Node_pt emtptyThree(){
    return;
}

Node_pt creaAlbero(int key, Node_pt figlioSx, Node_pt figlioDx){
    Node_pt r;
    r->val=key;
    r->left=figlioSx;
    r->right=figlioDx;
    return r;
}

void stampaAlbero(Node_pt tree){
    if(tree!=NULL){
    printf(" %u ", tree->val);
    stampaAlbero(tree->left);
    stampaAlbero(tree->right);
    }
}

void stampaInOrder(Node_pt tree){
    if(tree==NULL)return;
    stampaInOrder(tree->left); //sx
    printf(" %u ", tree->val); //radice
    stampaInOrder(tree->right); //dx
    return;
}

void stampaPostOrder(Node_pt tree){
    if(tree=NULL)return;
    stampaPostOrder(tree->left); //sx
    stampaPostOrder(tree->right); //dx
    printf(" %u ", tree->val); //radice
    return;    
}

void stampaPreOrder(Node_pt tree){
    if(tree==NULL)return;
    printf(" %u ", tree->val); //radice
    stampaPreOrder(tree->left);
    stampaPreOrder(tree->right);
    return;
}


/*
Node_pt algoritmo(int a[],int i, int f){
    if(i>f) return emtptyThree();
    Node_pt alberoSx=algoritmo(a,i,((f-i)/2)-1);
    Node_pt alberoDx=algoritmo(a,((f-i)/2)+1,f);
    Node_pt albero=creaAlbero(a[(f-i)/2],alberoSx,alberoDx);
    return albero; 
}
 * */
