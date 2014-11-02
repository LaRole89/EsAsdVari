/*Dato un vettore v di n interi, eventualmente ripetuti, ordinati in senso
crescente, e un intero k, definire due funzioni occ1 e occ2 che contano il numero di occorrenze di k in v, tali che:
 
- occ1 richiede tempo O(n). 
- occ2 richiede tempo O(log n).
 
 
I prototipi delle funzioni sono:
 
int occ1(int v[], int k, int dim)
int occ2(int v[], int k, int dim)
 
 
Esempio: 
v =  {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11} e k = 7, allora le funzioni restituiscono 3.
v =  {3, 3, 5, 6, 7, 7, 7, 9, 9, 10, 11} e k = 4, allora le funzioni restituiscono 0.
 
 
NOTA:
 
Il sistema compila il codice secondo lo standard C89. Nel caso in cui si facciamo dei test in locale, passare i parametri opportuni al compilatore.
Ad esempio, nel caso di gcc si deve specificare l'opzione "-std=c89".*/

int occ1(int v[], int k, int dim){
    int ris=0;
    for(int i=0; i<dim; i++){
        if(v[i]>k){
         return ris;
        }
        if(v[i]==k)
            ris++;
    }
return ris;   
}