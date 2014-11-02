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
extern void ordinato3(int v[], int dim);


int main(int argc, char** argv) {

	int a[] = {5, 7, 15, 1, 4, 3, 5};
	int i;
        int ris;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 7; ++i)
		printf(" %d ", a[i]);

	ordinato3(a, 7);
        
        //printf("\n\n risultato %d ", ris);

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 7; ++i)
		printf(" %d ", a[i]);
}

