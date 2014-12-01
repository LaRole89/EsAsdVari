/*
Scrivere una procedura per invertire il contenuto di una coda
usando SOLO le operazioni del tipo di dato Coda definite in
queue.h. 
 
Il prototipo della procedura e`:
 
void inverti(Queue q)
 
Dimostrare formalmente la complessita' di questa procedura.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "Tree.h"


void inverti(Queue q){
    char ** arrey;
    int dim=0;
    while(size(q)){
        arrey[(size(q)-1)]=dequeue(q);
        dim++;
    }
    while(dim){
        enqueue(q, arrey[size(q)]);
        dim--;
    }
}