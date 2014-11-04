/*
 Scrivere una funzione ricorsiva di tipo divide-et-impera ugualeAindice che opera come segue.  Dato un vettore v di interi distinti e ordinati in senso crescente,  
 * restituisce un indice i del vettore tale che v[i] == i se tale i esiste, restituisce -1 altrimenti.

Determinare la complessità della funzione.

Esempio:
Sia v = <-12, -5, 1, 3, 5, 9>. La funzione ugualeAindice restituisce 3.

Sia v = <-2, 0, 3, 5, 7>. La funzione ugualeAindice restituisce -1
 */

int ugualeAindice(int v[],int i, int f){
    int mid=(i+f)/2;
    if(i>f){
        return -1;
    }else{
        if(v[mid]==mid){
            return mid;
        }else{
            ugualeAindice(v,i, mid-1);
            ugualeAindice(v,mid+1,f);
        }
    }

}