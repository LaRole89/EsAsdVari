/* 
 * File:   Test.c
 * Author: Diego
 *
 * Created on 24 maggio 2014, 19.37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
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

/* HeapSort */
extern void heapify(int *a,int n);
extern void adjust(int *a,int n);
extern void heapsort(int *a,int n);

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

//extern void inverti(Queue q);

int main(int argc, char** argv) {
        //STAMPA ARRAY

	int a[] = {7, 6, 7, 9, 10, 11, 7, 9, 3, 3, 5};
	int i;
        int ris;
        
	printf("Unsorted array is:  ");
	for(i = 0; i < 11; ++i)
		printf(" %d ", *(a+i));

        //heapify(a,11);
	printf("\n\nSorted array is:  ");
	for(i = 0; i < 11; ++i)
		printf(" %d ", a[i]);
      
        
        //STAMPA ALBERI
    /*
    	int a[] = {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11};
        int indexI, indexF, dim;
	int i;
        int ris;
    */    
        Tree t,p;

        t=emptyThree();
        t=createABRWPtoARRAY(a, 11, t);
        deleteABRnode(t,6);
        //printf(" %d ", t->left->val);
            printf("\n \n");
        printLevelOrder(t);
            printf("\n"); 

        //STAMPA LISTE
            /*
        char a[]={'c','i','a','a','o'};
        char b[]={'c','i','c','c','i','o'};
        char c[]={'a','i','a','o'};
        char d[]={'p','a','b','l','o'};
        int i;

        char* total[]={a,b,c,d};
        
        Queue que=initqueue();
        
        printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 4; ++i)
		printf(" %s ", *(total+i));
            
            //creo la coda
        printf("\n\nQueue Before is:  ");
        enqueue(que,a);
        enqueue(que,b);
        enqueue(que,c);
        enqueue(que,d);
        printQueue(que);
        
        printf("\n\nQueue After is:  ");
        inverti(que);
        printQueue(que);
             * */
return (EXIT_SUCCESS);
}

