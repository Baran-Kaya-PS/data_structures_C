typedef struct Link {
    void* data;
    struct Link* next;
    struct Link* prev;
} Link;

typedef struct Pile {
    Link* last;
} Pile;

Pile* créer_pile();
void push(Pile* pile, void* donnee);
void* pop(Pile* pile);
int est_vide(Pile* pile);
void detruire_pile(Pile* pile);