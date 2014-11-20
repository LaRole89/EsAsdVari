/*Dato un numero reale x e due vettori v1 e v2 di dimensione n, scrivere una funzione cerca che restituisce 
 * 1 se esistono x1 in v1 e x2 in v2 per cui x=x1/x2ì, 
 * 0 altrimenti (assumere per ipotesi che i valori in v2 sono tutti diversi da 0).
Nel caso in cui la funzione restiuisca 1 i valori x1 e x2 che soddisfano la condizione devono essere restituiti all'utente.

La complessità della funzione deve essere O(n log n).

Il prototipo della funzione è:
int cerca(double *v1, int dim1, double *v2, int dim2, double x, double *x1, double *x2*/


int cerca(double *v1, int dim1, double *v2, int dim2, double x, double *x1, double *x2){
    int i, mid;
    
    if(dim1<=0){ return 0; }
    else if(dim2<=0){ return 0; }
    else{
        for(i=0;i<dim1;i++){
            mid=dim2/2;
            
            if((v1[i]/v2[mid])==x){
                *x1=v1[i];
                *x2=v2[mid];
                return 1;
            }
        }
        cerca(v1, dim1, v2+mid+1, dim2-mid-1, x, x1, x2);
        cerca(v1, dim1, v2, mid, x, x1, x2);
    }
}