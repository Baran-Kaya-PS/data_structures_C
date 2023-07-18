#include "test_file.h"


void pop_pile_vide();

void pop_pile_3_elements();

int main() {
    //push_pile_avec_5000_élément_vérification_des_valeurs();
    pop_pile_3_elements();
    return 0;
}

void pop_pile_3_elements() {
    Pile* pile = créer_pile();
    int *p = (int*) malloc(sizeof(int));
    *p = 1;
    push(pile, p);
    int *p2 = (int*) malloc(sizeof(int));
    *p2 = 2;
    push(pile, p2);
    int *p3 = (int*) malloc(sizeof(int));
    *p3 = 3;
    push(pile, p3);
    printf("Test pop pile avec 3 éléments : \n");
    int *value = (int*) pop(pile);
    if (*value == 3) printf("Test pop pile avec 3 éléments : SUCCESS \n");
    else printf("Test pop pile avec 3 éléments : FAILED \n");
    value = (int*) pop(pile);
    if (*value == 2) printf("Test pop pile avec 3 éléments : SUCCESS \n");
    else printf("Test pop pile avec 3 éléments : FAILED \n");
    value = (int*) pop(pile);
    if (*value == 1) printf("Test pop pile avec 3 éléments : SUCCESS \n");
    else printf("Test pop pile avec 3 éléments : FAILED \n");
    value = (int*) pop(pile);
    if (value == NULL) printf("Test pop pile avec 3 éléments : SUCCESS \n");
    else printf("Test pop pile avec 3 éléments : FAILED \n");

}

void pop_pile_vide() {
    Pile* pile = créer_pile();
    void* value = pop(pile);
    if (value == NULL) printf("Test pop pile vide : SUCCESS \n");
    else printf("Test pop pile vide : FAILED \n");
}


bool test_creer_pile(){
    Pile* pile = créer_pile();
    if (pile != NULL) return true;
    else return false;
}

bool push_pile_vide(){
    Pile* pile = créer_pile();
    push(pile,(void *) 32);
    if (pile->last != NULL) {
        return true;
    } else {
        return false;
    }
}


bool push_pile_non_vide(){
    Pile* pile = créer_pile();
    push(pile,(void*) 32);

    push(pile,(void*) 1321);
    if (pile->last->data == 1321) return true;
    else return false;
}
void push_pile_avec_5000_élément_vérification_des_valeurs(){
    printf("Test push pile avec n éléments éléments: \n");
    Pile* pile = créer_pile();
    for (int i = 0; i < 3;i++){
        int *p = (int*) malloc(sizeof(int));
        *p = i;
        push(pile, p);
        top(pile);
    }
    free(pile);
}

