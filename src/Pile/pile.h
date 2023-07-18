typedef struct Link {
    void* data;
    struct Link* next;
    struct Link* prev;
} Link;

typedef struct Pile {
    Link* last;
} Pile;

Pile* creer_pile();
void push(Pile* pile, void* donnee);
void top(Pile* pile);
void* pop(Pile* pile);
int est_vide(Pile* pile);
void detruire_pile(Pile* pile);
void values(Pile* pile);
void lenght(Pile* pile);