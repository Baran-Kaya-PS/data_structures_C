typedef struct Array{
    int size; // la taille du tableau
    int length; // la longueur du tableau
    int *A; // le tableau
} Array;

Array* newArray(int size);

