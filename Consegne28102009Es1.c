/*
 * Scrivere una procedura iterativa partizione che dato un vettore di numeri reali e la sua dimensione permuta tali elementi in modo tale che i numeri positivi precedano quelli non positivi.
Si può scorrere il vettore al più una volta e non si possono usare vettori ausiliari.
Definire l'invariante per il ciclo, la funzione di terminazione e calcolare la complessità in tempo.

Il prototipo della procedura è:
void partizione(double *v, int dim)

Esempio:
Sia v = [0, 3, -5, 1, -7] applicando la procedura partizione a v si ottiene [1, 3, -5, -7, 0].*/


void partizione(int v[], int dim){
    int i, f, temp;
    f=dim-1;
    while(i<f){
        if(v[i]>0){
            i++;
        }else{
            if(v[f]>0){
                temp=v[i];
                v[i]=v[f];
                v[f]=temp;
                //scambio
                i++;
                f--;
            }else{
                f--;
            }
        }
    }
}