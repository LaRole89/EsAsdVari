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

/* MargeSort */
//extern void MergeSort(int A[], int p, int r);
//extern void Merge(int A[], int p, int q, int r);

/* Esame 30 05 2013 es 2 */
//extern int algoritmo(int a[], int k, int alength);

/* Esame 10 09 2012 es 1 */
//extern int funcOneInArray(int a[], int i, int f);

/* Consegne 31 10 2014 es 1 */
//extern int occ1(int v[], int k, int dim);
//extern int occ2(int v[], int k, int dim);


/* Consegne 31 10 2014 es 2 */
//extern void selectionsort(int v[], int dim);

/* Consegne 31 10 2014 es 3 */
//extern void ordinato3(int v[], int dim);

/* Consegne 28 10 2009 es 1 */
//extern void partizione(int v[], int dim);

/* Consegne 28 10 2009 es  */
//extern int ugualeAindice(int v[],int i, int f);

/* Consegne 28 10 2009 es  4*/
//extern int occ(int *v, int dim, int k);

/* functionTree */
extern Tree emptyThree();
extern int IsEmpty(Tree t);
extern Tree createNode(int key, Tree figlioSx, Tree figlioDx);
extern void stampaInOrder(Tree tree);
extern void stampaPostOrder(Tree tree);
extern void stampaPreOrder(Tree tree);
Tree creaAlbero(int *a, int i, int f);
/**/


int main(int argc, char** argv) {
        //STAMPA ARRAY
    /*
	int a[] = {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11};
	int i;
        int ris;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 7; ++i)
		printf(" %d ", *(a+i));

	ris = occ(a, 11, 7);
        
        printf("\n\n risultato %d ", ris);

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 6; ++i)
		printf(" %d ", a[i]);
    */    
        
        //STAMPA ALBERI
    	int a[] = {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11};
        int indexI, indexF, dim;
	int i;
        int ris;
        Tree t;
        
        t=creaAlbero(a,0,10);
        //printf(" %d ", t->left->val);



}

