#include "test_file.h"


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
    if (push_pile_avec_5000éléments()){
        printf("Test push pile: SUCCESS\n");
    } else {
        printf("Test push pile: FAILED\n");
    }
//TEST PUSH//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    push_pile_avec_5000_élément_vérification_des_valeurs();
    return 0;
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

bool push_pile_avec_5000éléments(){
    Pile* pile = créer_pile();
    for (int i = 0; i < 5000; ++i) {
        push(pile,(void*) i);
    }
    if (pile->last->data == 4999) return true;
    else return false;
}
void push_pile_avec_5000_élément_vérification_des_valeurs(){
    Pile* pile = créer_pile();
    for (int i = 0; i < 10;i++){
        int *p = (int*) malloc(sizeof(int));
        *p = i;
        push(pile, p);
    }
    Link* temp = pile->last;
    while (temp != NULL){
        printf("%d\n", *(int*)temp->data);
        temp = temp->prev;
    }
    while (pile->last != NULL){
        int* p = (int*) pop(pile);
        free(p);
    }
    free(pile);
}
