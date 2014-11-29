#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

/* ABR Alberi di ricerca */
/*
 * ogni nodo contiene una chiave
 * ogni valore della chiave è maggiore o uguale al valore della chiave contenuta in ciascin nodo del sottoalbero sinistro (se esiste)
 * ogni valore della chiave è minore o uguale al valore della chiave contenutra in ciascun nodo del sottoalbero destro (se esiste)
 *      x
 *  <=x    >=x
 */

Tree addABRnode(int key, Tree t){    
    if(t==NULL){
        Tree newnode;
        newnode=createNode(key, NULL, NULL);
        return newnode;
    }else if(t->val<key){
        t->right=addABRnode(key,t->right);
        return t;
    }else{
        t->left=addABRnode(key,t->left);
        return t;
    }
}

Tree createABRtoARRAY(int *a, int dim, Tree tree){
    int i;
    for(i=0 ; i<dim; i++){
        tree=addABRnode(a[i], tree);
    }
    return tree;
}

Tree ABRsearch(Tree tree, int k){
    if(tree==NULL){
        return NULL;
    }else{
        if(tree->val>k){
            ABRsearch(tree->left,k);
        }else if (tree->val<k){
            ABRsearch(tree->right,k);
        }else{
            return tree;
        }
    }
}

int isInABR(Tree tree, int k){
    if(tree==NULL){
        return 0;
    }else{
        if(tree->val>k){
            isInABR(tree->left,k);
        }else if (tree->val<k){
            isInABR(tree->right,k);
        }else{
            return 1;
        }
    }
}


Tree ABRgetMAX(Tree tree){
    if(tree==NULL){
        return NULL;
    }else if(tree->right==NULL){
        return tree;
    }else{
        ABRgetMAX(tree->right);
    }
}

Tree ABRgetMIN(Tree tree){
    if(tree==NULL){
        return NULL;
    }else if(tree->left==NULL){
        return tree;
    }else{
        ABRgetMAX(tree->left);
    }
}

void printLevel(Tree p, int level) {
  if (p==NULL){
      printf(" . ");
      return;
  }if (level == 0){
    printf(" %u ", p->val);
  } else {
    printLevel(p->left, level-1);
    printLevel(p->right, level-1);
  }
}

int maxHeight(Tree tree){
    int ris;
    if(tree==NULL){
        ris=-1;
        return ris;
    }else{
        return(maxHeight(tree->left) > maxHeight(tree->right)) ? maxHeight(tree->left) + 1 : maxHeight(tree->right) + 1;
    }
}

 
void printLevelOrder(Tree tree){
    int level;
    int height = maxHeight(tree);
    for (level = 0; level <= height; level++) {
        printLevel(tree, level);
        printf("\n");
    }
}


Tree predecessore(Tree tree, int k){
    Tree pred=NULL;
    while(tree!=NULL){
        if(k<=tree->val){
            tree=tree->left;
        }else{
            pred=tree;
            tree=tree->right;
        }
    }
    return pred;
}
