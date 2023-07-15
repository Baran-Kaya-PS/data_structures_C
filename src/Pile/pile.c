#include "pile.h"
#include <stdlib.h>

Pile* créer_pile(){
    Pile* pile;
    pile->last == NULL;
    return pile;
};

void push(Pile* pile, void* donnee){
    if (pile->last == NULL){
        pile->last == donnee;
    } else {
        pile->last->next == donnee;
        pile->last == donnee;
    }
};

void* pop(Pile* pile);

int est_vide(Pile* pile);

void detruire_pile(Pile* pile);