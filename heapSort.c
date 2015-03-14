/* 
 * File:   quickSort.c
 * Author: Diego
 *
 * Created on 10 maggio 2014, 13.08
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
/*
void max_heapify(int *v, int dim, int i){
    int left=2*i+1;
    int right=2*i+2;
    int maxindex, temp;
    
    //prendo l'indice con valore maggiore
    if((left<dim)&&(v[left]>v[i])){
        maxindex=left;
    }else{
        maxindex=i;
    }
    
    if((right<dim)&&(v[right]>v[i])){
        maxindex=right;
    }else{
        maxindex=i;
    }
    
    if(maxindex!=i){//se v[i] non è il massimo lo scambio con il massimo e lo porto giù nell'albero
        temp=v[i];
        v[i]=v[maxindex];
        v[maxindex]=temp;
        //ripeto sul sottoalbero
        max_heapify(v, dim, maxindex);
    }
    return;
}


void build_heap(int *v, int dim){
    int i;
    for(i=(dim/2)-1; i>=0; i--){
        max_heapify(v,dim,i);
    }
}

void heapSort(int *v, int dim){
    int i, temp, tempdim;
    build_heap(v,dim);
    
    for(i=dim-1; i<0; i--){
        tempdim=i;
        temp=v[0];
        v[0]=v[i];
        v[i]=temp;
        
        tempdim=tempdim-1;
        max_heapify(v,tempdim,0);
    }
}*/

void heapsort(int *a,int n)
{
 int i,t;
 
 heapify(a,n);
 
 for(i=n-1;i>0;i--)
 {
  t = a[0];
  a[0] = a[i];
  a[i] = t;
  adjust(a,i);
 }
}
 
 
void heapify(int *a,int n)
{
 int k,i,j,item;
 
 for(k=1;k<n;k++)
 {
  item = a[k];
  i = k;
  j = (i-1)/2;
 
  while((i>0)&&(item>a[j]))
  {
   a[i] = a[j];
   i = j;
   j = (i-1)/2;
  }
  a[i] = item;
 }
}
 
void adjust(int *a,int n)
{
 int i,j,item;
 
 j = 0;
 item = a[j];
 i = 2*j+1;
 
 while(i<=n-1)
 {
  if(i+1 <= n-1)
   if(a[i] <a[i+1])
    i++;
  if(item<a[i])
  {
   a[j] = a[i];
   j = i;
   i = 2*j+1;
  }
  else
   break;
 }
 a[j] = item;
}