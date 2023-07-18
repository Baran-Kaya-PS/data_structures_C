#include <stdlib.h>
#include <stdio.h>
#include "array.h"

Array *newArray(int size) {
    Array *array = (Array *) malloc(sizeof(Array));
    array->size = size;
    array->length = 0;
    array->A = (int *) malloc(size * sizeof(int));
    return array;
}