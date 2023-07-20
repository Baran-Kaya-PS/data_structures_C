/*
typedef struct Map{
    void* key;
    void* value;
    struct Map* next;
} Map;

typedef struct HashMap{
    Map* firstvalue;
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
    hashMap->firstvalue = hashMap->map;
    return hashMap;
}

void resetMap(HashMap* hashMap){
    hashMap->map = hashMap->firstvalue;
}

int size(HashMap map){
    return map.size;
}
void values(HashMap HashMap){
    Map* map = HashMap.map;
    while (map != NULL){
        printf(map->value);
        map = map->next;
    }
    resetMap(&HashMap);
    // TODO: faire un test pour voir si ça reset bien la map

}
bool isEmpty(HashMap HashMap){
    if (HashMap.map->value == NULL) return true;
    else return false;
}

bool containsKey(HashMap hashMap, void* key){
    while (hashMap.map != NULL){
        if (hashMap.map->key == key){
            resetMap(&hashMap);
            return true;
        }
    }
    resetMap(&hashMap);
    return false;
}

bool containsValue(HashMap hashMap,void* value){
    while (hashMap.map != NULL){
        if (hashMap.map->value == value) return true;
    }
    resetMap(&hashMap);
    return false;
}
void put(HashMap hashMap, void* key, void* value){
    if (hashMap.size == hashMap.capacity) {
        printf("HashMap is full");
        return;
    } else {
        Map *map = hashMap.map;
        while (map != NULL) {
            if (map->key == key) {
                map->value = value;
                resetMap(&hashMap);
                return;
            }
            map = map->next;
        }
        Map *newMap = createMap();
        newMap->key = key;
        newMap->value = value;
        map->next = newMap;
        hashMap.size++;
        resetMap(&hashMap);
    }
}

void* get(HashMap hashMap, void* key){
    while (hashMap.map != NULL){
        if (hashMap.map->key == key) {
            resetMap(&hashMap);
            return (void *) hashMap.map->value;
        }
        hashMap.map = hashMap.map->next;
    }
    resetMap(&hashMap);
}
void* delete(HashMap hashMap, void* key) {
    if (containsKey(hashMap,key)){

    }
}