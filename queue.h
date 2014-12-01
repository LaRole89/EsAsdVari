/* 
 * File:   queue.h
 * Author: Diego
 *
 * Created on 29 novembre 2014, 14.19
 */

#ifndef QUEUE_H
#define	QUEUE_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct queue* Queue;
typedef struct qnode QNode;

Queue initqueue();
int queueEmpty(Queue q);
void enqueue(Queue q, char * elem);
char * dequeue(Queue q);
char * first(Queue q);
int size(Queue q);

#ifdef	__cplusplus
}
#endif

#endif	/* QUEUE_H */

