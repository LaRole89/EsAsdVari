/*Un vettore v di numeri naturali si dice 3-ordinato se
 
per ogni i, j. i <= j  ==>  v[i]%3 <= v[j]%3
 
Dato un vettore scrivere una procedura che renda tale vettore 3-ordinato.
 
Il vettore puo` essere scorso al piu' una SOLA volta e non possono essere utilizzate strutture ausiliarie.
 
Il prototipo della procedura e':
void ordinato3(int v[], int dim)
 
Qual'e' la complessita' al caso pessimo?
 
 
Esempio: 
Dato il vettore v = <5, 7, 15, 1, 4, 3, 0>, un possibile risultato della trasformazione e` il vettore <0, 15, 3, 1, 4, 7, 5> che e` 3-ordinato.*/

void ordinato3(int v[], int dim){
    int inizio, fine, i, temp;
    inizio=0;
    fine=dim-1;
    
    for(i=1;i<fine;i++){
        if(inizio>fine){
            return;
        }else{
            if(v[i]%3==0){
                //scmbio
                temp=v[i];
                v[i]=v[inizio];
                v[inizio]=temp;
                //incremento l'indice iniziale
                inizio++;
                i--;
            }else if(v[i]%3==2){
                //scmbio
                temp=v[i];
                v[i]=v[fine];
                v[fine]=temp;
                //decremento l'indice finale
                fine--;
                i--;
            }
        }   
    }
    return;
}