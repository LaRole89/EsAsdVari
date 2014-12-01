#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

struct queue{
    int size;
    QNode* first;
    QNode* last;
};

struct qnode{
    char* val;
    struct qnode* next;
};

/* post: costruisce una coda vuota */
Queue initqueue(){
    Queue newQ;
    newQ=(struct queue *) malloc(sizeof(Queue));
    newQ->first=NULL;
    newQ->last=NULL;
    newQ->size=0;
    return newQ;
}

/*post: ritorna 1 se la coda e' vuota, 0 altrimenti */
int queueEmpty(Queue q){
    if(q==NULL){
        return 0;
    }else{
        if(q->size>0){
            return 1;
        }else{
            return 0;
        } 
    }
}

/*post: inserisce elem in coda */
void enqueue(Queue q, char * elem){
    //creo il nuovo nodo
    QNode *newNodo;
    newNodo=(QNode *) malloc(sizeof(QNode));
    newNodo->val=elem;
    newNodo->next=NULL;
        
    if(q->size==0){
        //cambio i dati della coda
        q->first=newNodo;
        q->last=newNodo;
        q->size=1;
    }else{
        //lo aggancio all'ultimo nodo
        q->last->next=newNodo;
        //cambio i dati della coda
        q->last=newNodo;
        q->size++;
    }
}

/*pre: coda non vuota  */
/*post: restituisce e rimuove il primo elemento in coda */
char * dequeue(Queue q){
    char* ris=q->first->val;
    if(q->first==q->last){
        q->first=NULL;
        q->last=NULL;
    }else{
        q->first=q->first->next;
    }
    q->size--;
    return ris;
}

/*pre: coda non vuota  */
/*post: restituisce il primo elemento in coda */
char * first(Queue q){
    return q->first->val;
}

/*post: restituisce il numero di elementi nella coda */
int size(Queue q){
    return q->size;
}