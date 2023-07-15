#include "pile.h"
#include <stdlib.h>

Pile* créer_pile(){
    Pile* pile = (Pile*) malloc(sizeof(Pile));
    pile->last = NULL;
    return pile;
};

void push(Pile* pile, void* donnee){
    Link* new_link = (Link*) malloc(sizeof(Link)); // new link with data
    new_link->data = donnee; // put the data into the new link
    new_link->next=NULL; // put the next into null

    if (pile->last==NULL){ // if statement if the last of the stack is null then we put the new link at the end of the stack
        pile->last=new_link;
    } else {
        new_link->next = pile->last;
        pile->last = new_link;
    }
};

void* pop(Pile* pile);

int est_vide(Pile* pile);

void detruire_pile(Pile* pile);