/*
 Dato un vettore v di n interi, eventualmente ripetuti, ordinati in senso crescente, e un intero k, definire una funzione occ che conta il numero di occorrenze di k in v.

La complessità della funzione deve essere O(log n).

Il prototipo della funzione è:
int occ(int *v, int dim, int k)

Esempio:
v = <3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11> e k = 7, allora la funzione occ restituisce 3.

v = <3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11> e k = 4, allora la funzione occ restituisce 0.
 */


int occ(int *v, int dim, int k){
    int i, f, mid, dimsx, dimdx;
    if(dim<=0){
        return 0;
    }else{
        i=0;
        f=dim-1;
        mid=(f+i)/2;

        dimsx= mid;
        dimdx=dim-mid-1;

        if(v[mid]==k){
            return 1+occ(v,dimsx,k)+occ(v+mid+1,dimdx,k);
        }else{ 
            if(v[mid]>k){
                return occ(v,dimsx,k);
            }else{
                return occ(v+mid+1,dimdx,k);
            }
        }   
    }

}
