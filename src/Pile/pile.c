#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

Pile* creer_pile(){
    Pile* pile = (Pile*) malloc(sizeof(Pile));
    pile->last = NULL;
    return pile;
};

void push(Pile* pile, void* donnee){
    Link* link = (Link*) malloc(sizeof(Link));
    link->data = donnee;
    link->next = pile->last;
    pile->last = link;
}
void* pop(Pile* pile){
    if (pile->last != NULL){
        Link* temp = pile->last;
        pile->last = pile->last->next;
        return temp->data;
    } else {
        return NULL;
    }
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
}
void values(Pile* pile){
    Link* temp = pile->last;
    while (temp != NULL){
        printf("%d\n", *(int*)temp->data);
        temp = temp->next;
    }
};
void lenght(Pile* pile){
    Link* temp = pile->last;
    int i = 0;
    while (temp != NULL){
        i++;
        temp = temp->next;
    }
    printf("%d\n", i);
};

