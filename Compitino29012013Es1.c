/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 10 maggio 2014, 14.59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Dare la definizione di albero binario completo.
 * Scrivere in C un programma efficiente per stabilire se un albero binario è completo e calcolarne la
 * complessità al caso pessimo indicando, e risolvendo, la corrispondente relazione di ricorrenza.
 */

typedef struct node{
    int val;
    struct node *left;
    struct node *right;
}Node;

