#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"


Tree emptyThree(){
    return NULL;
}

int IsEmpty(Tree t){
    return (t==NULL);
}

Tree createNode(int key, Tree figlioSx, Tree figlioDx){
    Tree r;
    r=(Node *) malloc(sizeof(Node));
    r->val=key;
    r->left=figlioSx;
    r->right=figlioDx;
    return r;
}

void stampaInOrder(Tree tree){
    if(tree!=NULL){
        stampaInOrder(tree->left); //sx
        printf(" %u ", tree->val); //radice
        stampaInOrder(tree->right); //dx
        return;
    }else{
        printf(" . ");
        return;
    }

}

void stampaPostOrder(Tree tree){
    if(tree!=NULL){
        stampaPostOrder(tree->left); //sx
        stampaPostOrder(tree->right); //dx
        printf(" %u ", tree->val); //radice
        return;
    }else{
        printf(" . ");
        return;
    }
}

void stampaPreOrder(Tree tree){
    if(tree==NULL){
        printf(" . ");
        return;
    }
    printf(" %u ", tree->val); //radice
    stampaPreOrder(tree->left); //sx
    stampaPreOrder(tree->right); //dx
    return;
}

Tree creaAlbero(int *a, int i, int f){
    if(i>f){
        return emptyThree();
    }else{
        int mid=(i+f)/2;
        return createNode(a[mid],creaAlbero(a, i, mid-1), creaAlbero(a, mid+1, f));
    }
}


