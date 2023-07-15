#include "test_file.h"


int main() {
    bool creer_pile = test_creer_pile();
    bool test_push_1 = push_pile_vide();
//TEST CREERPILE////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (creer_pile)
        printf("Test créer pile: SUCCESS\n");
    else
        printf("Test créer pile: FAILED\n");
//TEST PUSH//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if(test_push_1){
        printf("Test push pile: SUCCESS\n");
    } else {
        printf("Test push pile: FAILED\n");
    }
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
        printf("%p\n",pile->last->data);
        return true;
    } else {
        return false;
    }
}