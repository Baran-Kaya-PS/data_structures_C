/*
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

*/


#include "Map.h"
Map* createMap(){
    Map* map = (Map*) malloc(sizeof(Map));
    map->next = NULL;
    return map;
}

HashMap* createHashMap(int capacity){
    HashMap* hashMap = (HashMap*) malloc(sizeof(HashMap));
    hashMap->map = createMap();
    hashMap->size=0;
    hashMap->capacity = capacity;
    return hashMap;
}

int size(HashMap map){
    return map.size
}
void* values(HashMap map){
    Map* temp = map.map;

}
