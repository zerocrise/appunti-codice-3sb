#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void carica(int[],int);
int cerca(int[],int,int);
int contaPari(int [],int );
int main() {
    const int DIM=37;
int v[DIM];
    char a[]="CERCA UN VALORE";

    printf("%s\n",a);
    carica(v,DIM);
    int x=17;
    int i=cerca(v,DIM,x);
    if ( i!=-1) {
        printf("il valore %d si trova in posizone %d\n",x,i);

    }else {
        printf("il numero %d non si trova in v",x);
    }
    int pari=contaPari(v,DIM);
    printf("In v ci sono %d numeri pari\n",pari);



}
void carica(int array[],int dim) {
    srand(time(NULL));
    for (int i=0;i<dim;i++) {
        array[i]=rand()%dim;
    }
}
int cerca(int array[],int dim,int x) {
    for (int i=0;i<dim;i++) {
        if (array[i]==x) {
            return i;
        }
    }
    return -1;
}
int contaPari(int array[],int dim) {
    int conta=0;
    for (int i=0;i<dim;i++) {
        if (array[i]%2==0) {
            conta++;
        }
    }
    return conta;
}