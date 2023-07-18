#include "test_file.h"

int main() {
    printf("Hello, World!\n");
    lenght_pile_avec_5000_element_verification_des_valeurs();
    return 0;
}

void push_pile_avec_5000_element_verification_des_valeurs() {
    printf("Test push pile avec n elements elements: \n");
    Pile* pile = creer_pile();
    for (int i = 0; i < 5000;i++){
        int *p = (int*) malloc(sizeof(int));
        *p = i;
        push(pile, p);
        top(pile);
    }
    free(pile);
}

void pop_pile_3_elements() {
    Pile* pile = creer_pile();
    int *p = (int*) malloc(sizeof(int));
    *p = 1;
    push(pile, p);
    int *p2 = (int*) malloc(sizeof(int));
    *p2 = 2;
    push(pile, p2);
    int *p3 = (int*) malloc(sizeof(int));
    *p3 = 3;
    push(pile, p3);
    printf("Test pop pile avec 3 elements : \n");
    int *value = (int*) pop(pile);
    if (*value == 3) printf("Test pop pile avec 3 elements : SUCCESS \n");
    else printf("Test pop pile avec 3 elements : FAILED \n");
    value = (int*) pop(pile);
    if (*value == 2) printf("Test pop pile avec 3 elements : SUCCESS \n");
    else printf("Test pop pile avec 3 elements : FAILED \n");
    value = (int*) pop(pile);
    if (*value == 1) printf("Test pop pile avec 3 elements : SUCCESS \n");
    else printf("Test pop pile avec 3 elements : FAILED \n");
    value = (int*) pop(pile);
    if (value == NULL) printf("Test pop pile avec 3 elements : SUCCESS \n");
    else printf("Test pop pile avec 3 elements : FAILED \n");
}

void pop_pile_vide() {
    Pile* pile = creer_pile();
    void* value = pop(pile);
    if (value == NULL) printf("Test pop pile vide : SUCCESS \n");
    else printf("Test pop pile vide : FAILED \n");
}


bool test_creer_pile(){
    Pile* pile = creer_pile();
    if (pile != NULL) return true;
    else return false;
}

bool push_pile_vide(){
    Pile* pile = creer_pile();
    push(pile,(void *) 32);
    if (pile->last != NULL) {
        return true;
    } else {
        return false;
    }
}


bool push_pile_non_vide(){
    Pile* pile = creer_pile();
    push(pile,(void*) 32);

    push(pile,(void*) 1321);
    if (pile->last->data == 1321) return true;
    else return false;
}

void values_pile_avec_5000_element_verification_des_valeurs() {
    printf("Test values pile avec n elements elements: \n");
    Pile* pile = creer_pile();
    for (int i = 0; i < 5000;i++){
        int *p = (int*) malloc(sizeof(int));
        *p = i;
        push(pile, p);
    }
    values(pile);
    free(pile);
}

void lenght_pile_avec_5000_element_verification_des_valeurs() {
    printf("Test lenght pile avec n elements elements: \n");
    Pile* pile = creer_pile();
    for (int i = 0; i < 5000;i++){
        int *p = (int*) malloc(sizeof(int));
        *p = i;
        push(pile, p);
    }
    lenght(pile);
    free(pile);
}


