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
 void quickSort(int x[], int first, int last) {
     int pivIndex = 0;
     if(first < last) {
         pivIndex = partition(x,first, last);
         quickSort(x,first,(pivIndex-1));
         quickSort(x,(pivIndex+1),last);
     }
 }

 int partition(int y[], int f, int l) {
     int up,down,temp;
     int piv = y[f];
     up = f;
     down = l;
     goto partLS;
     do { 
         temp = y[up];
         y[up] = y[down];
         y[down] = temp;
     partLS:
         while (y[up] <= piv && up < l) {
             up++;
         }
         while (y[down] > piv  && down > f ) {
             down--;
         }
     } while (down > up);
     y[f] = y[down];
     y[down] = piv;
     return down;
 }

/*
int main(int argc, char** argv) {
	int a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9};

	int i;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);

	quickSort( a, 0, 8);

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);
}

*/
