#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Map{
    void* key;
    void* value;
    struct Map* next;
} Map;

typedef struct HashMap{
    Map* map;
    int size;
    int capacity;
} HashMap;

Map* createMap();
HashMap* createHashMap(int);
int size(HashMap);
void* values(HashMap);
bool isEmpty(HashMap);
bool containsKey(HashMap ,void* key);
bool containsValue(HashMap,void* value);
void put(HashMap, void* key, void* value);
void* get(HashMap, void* key);
void* delete(HashMap, void* key);
void clear(HashMap);
void* keySet(HashMap);
void* entrySet(HashMap);
HashMap* clone(HashMap);
void* setValue(HashMap, void* key, void* value);
int hashCode(HashMap, void* key);
bool equals(HashMap, HashMap*);
char* toString(HashMap, void* key);
void* getOrDefault(HashMap, void* key, void* defaultValue);
void* putIfAbsent(HashMap, void* key, void* value);
