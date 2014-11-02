/*Dato un vettore v di n interi, eventualmente ripetuti, ordinati in senso
crescente, e un intero k, definire due funzioni occ1 e occ2 che contano il numero di occorrenze di k in v, tali che:
 
- occ1 richiede tempo O(n). 
- occ2 richiede tempo O(log n).
 
 
I prototipi delle funzioni sono:
 
int occ1(int v[], int k, int dim)
int occ2(int v[], int k, int dim)
 
 
Esempio: 
v = {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11> e k = 7, allora le funzioni restituiscono 3.
v = {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11> e k = 4, allora le funzioni restituiscono 0.
 
 
NOTA:
 
Il sistema compila il codice secondo lo standard C89. Nel caso in cui si facciamo dei test in locale, passare i parametri opportuni al compilatore.
Ad esempio, nel caso di gcc si deve specificare l'opzione "-std=c89".*/

int occ1(int v[], int k, int dim){
    int ris=0;
    int i;
    
    for(i=0; i<dim; i++){
        //se il numero dell'array è maggiore di k esco
        if(v[i]>k){  return ris; }
        //se il numero dell'array è uguale a k aggiungo 1
        if(v[i]==k){ ris++; }
        // se è minore non faccio niente e scorro l'array
    }
    
    //uscito dal for restituisco ris
    return ris;
}

int supp(int v[], int k, int i, int f){
    int mid;

    if(i>f){
        return 0;
    }else{
        mid=(i+f)/2;
        if(v[mid]==k){
            return 1+supp(v,k,i,mid-1)+supp(v,k,mid+1,f);
        }
        else if(v[mid]>k){
            return supp(v,k,i,mid-1);
        }
        else if(v[mid]<k){
            return supp(v,k,mid+1,f);
        }
    }
}


int occ2(int v[], int k, int dim){
    
    return supp(v,k,0,dim-1);
    
}


