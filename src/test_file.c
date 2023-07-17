#include "test_file.h"


void pop_pile_vide();

void pop_pile_3_elements();

int main() {
    bool creer_pile = test_creer_pile();
    bool test_push_1 = push_pile_vide();
    bool test_push_2 = push_pile_non_vide();
//TEST CREERPILE////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (creer_pile)
        printf("Test creer pile: SUCCESS\n");
    else
        printf("Test creer pile: FAILED\n");
//TEST PUSH//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if(test_push_1){
        printf("Test push pile: SUCCESS\n");
    } else {
        printf("Test push pile: FAILED\n");
    }
//TEST PUSH//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (test_push_2){
        printf("Test push pile: SUCCESS\n");
    } else {
        printf("Test push pile: FAILED\n");
    }
//TEST PUSH//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    push_pile_avec_5000_élément_vérification_des_valeurs();
    //pop_pile_vide();
    pop_pile_3_elements();
    return 0;
}

void pop_pile_3_elements() {
    int val1 = 1;
    int val2 = 2;
    int val3 = 3;
    Pile* pile = créer_pile();
    push(pile,&val1);
    push(pile,&val2);
    push(pile,&val3);
    pop(pile);
    pop(pile);
    pop(pile);
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

