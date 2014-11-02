/*Dato un array v ordinato in senso crescente di n interi, il cui valore può essere solo 0 e 1, progettare
 * un algoritmo efficiente, di tipo divide-et-impera, che restituisca il numero di occorrenze del numero
 * 1 in v.
 */


#include <stdio.h>
#include <stdlib.h>

int funcOneInArray(int a[], int i, int f){
    int mid=f-i/2;
    if(f-i<0) return 0;
    return a[mid]+funcOneInArray(a,i,mid-1)+funcOneInArray(a,mid+1,f);
}