/*Dato un array v in n elementi si vuole ordinare tramite il selection sort. Questo algoritmo trova prima il piu' piccolo elemento di v e lo scambio con l'elemento in v[0]; 
 * poi, trova il secondo elemento piu' piccolo di v e lo scambia con v[1], e prosegue in questo modo per i primi n-1 elementi di v. 
 
Scrivere una versione RICORSIVA del selection sort e calcolarne la complessita' al caso pessimo.
 
Il prototipo della procedura  e':
void selectionsort(int v[], int dim)
 */
void selectionsort(int v[], int dim){
    int temp,i;
    
    if(dim<=1){
        return;
    }else{
        for(i=0;i<dim;i++){
           if(v[i]<v[0]){
               temp=v[i];
               v[i]=v[0];
               v[0]=temp;
               
           } 
        }
    }
    selectionsort(v+1,dim-1);
}
