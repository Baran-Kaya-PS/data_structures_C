#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

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

void* pop(Pile* pile){
    if (pile->last == NULL) {
        printf("Pile Vide !");
        return 0;
    }
    void* deleted_value = pile->last->data;
    printf("%d\n",*(int*) deleted_value);
    void* temp = pile->last;
    pile->last = pile->last->prev;
    if (pile->last != NULL){
        pile->last->next = NULL;
    }
    free(temp);
}
int est_vide(Pile* pile){
    if (pile->last == NULL)
        return 1;
    else return 0;
};

void detruire_pile(Pile* pile){
    free(pile);
};
void top(Pile* pile){
    if (pile->last != NULL){
        printf("%d\n", *(int*)pile->last->data);
    } else {
        printf("La pile est vide\n");
    }
};

