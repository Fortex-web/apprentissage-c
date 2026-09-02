#include <stdio.h>
#include <stdlib.h>



typedef struct elem {
    int valeur;
    struct elem *suivant;
} noeud;

int main(void) {
    noeud *a = malloc(sizeof(noeud));
    noeud *b = malloc(sizeof(noeud));
    noeud *c = malloc(sizeof(noeud));
    a->valeur = 5;
    b->valeur = 10;
    c->valeur = 15;
    a->suivant = b;
    b->suivant = c;
    c->suivant = NULL;
    noeud *courant =a;
    while(courant!=NULL){
        printf("%d\n", courant->valeur);
        courant = courant->suivant;
    }
    





    return 0;
}