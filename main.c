#include <stdio.h>//ricorda inclusione di tutte le librerie
#include <string.h>//per strtock
#include <stdlib.h>//per malloc e free

#define NP 2//definizione lunghezza vettore
#define LUNG 1024
//autore:Alessandro Gallo
//TESTO risolvere esercizio di ripasso in preparazione alla verifica:
//-creare un file .csv
//-scorrere il file e contare il numero di righe e creare un vettore con il numero trovato con malloc
//assegnare  e stampare con puntatori
//usare bublesort per stampa

void scambio(int *a, int *b) {
    //printf("a=%d\n", *a);//usate in fase di test
    //printf("b=%d\n", *b);
    int c;
    if (*b < *a) {
        c = *b;
        *b = *a;
        *a = c;
    }

    //printf("a=%d\n",*a);
   // printf("B=%d\n",*b);
}

void bubbleSort(int *vett, int n) {
    int k, sup;
    int app = 0;
    for (sup = n - 1; sup > 0; sup--) {//serve per scorrere tutto il vettore
        for (k = 0; k < sup; k++) {//serve per eserguire tutti i confronti
            //printf("a\n"); usate in fase di test
            //printf("%d\n",*vett);
            //printf("%d\n",*(vett+1));
            if (*vett > *(vett + 1)) {//esegue il controllo
                //  printf("b\n");
                scambio(vett, (vett + 1));//richiama la funzione che scambia i valori
            }
            vett = vett + 1;//incremento l'indirizzo della cella puntata di 1
        }
        vett = vett - sup;//ristemo la variabile all'indirizzo di partenza
    }
}
void stampa(int *vett,int n){
    for (int k=0;k<n;k++){
        printf("%d",*(vett+k));
    }
}

int main() {
    int a = 0;
    int numeri[] = {3, 2, 1};
    int *num = numeri;
    bubbleSort(num, 3);
    stampa(num,3);
}
//problema nello scambio delle variabili
//lettura o