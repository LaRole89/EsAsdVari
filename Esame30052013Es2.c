/* 
 * File:   Esame30052013Es2.c
 * Author: Diego
 *
 * Created on 24 maggio 2014, 18.51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Dato un array non ordinato di n interi, eventualmente ripetuti, e un intero positivo k, progettare un
 * algoritmo efficiente che restituisca 1 se esiste un valore nell’array che occorre esattamente k volte,
 * 0 altrimenti. Analizzarne la complessità in tempo.
 * L’algoritmo deve utilizzare spazio aggiuntivo costante e devono essere definite esplicitamente
 * eventuali funzioni/procedure ausiliarie.
 */

int algoritmo(int a[], int k, int alength){
    /*ordino l'array O(nlogn)*/
    int count,i;
    count=0;
    
    for(i=0; i<alength; i++){
        count++;
        if((i+1>=alength)||(a[i]!=a[i+1])){
            if(count==k)return 1;
            count=0;
        }
    }
    return 0;
}


