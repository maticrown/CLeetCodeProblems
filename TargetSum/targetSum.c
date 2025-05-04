//
// Created by User on 29/04/2025.
//
#include "targetSum.h"

HashMap * createHashMap(int capacity) {
    HashMap * map = malloc(sizeof(HashMap));
    map->capacity = capacity;
    map->buckets = calloc(capacity, sizeof(Entry*));
    return map;
}

int hash(int key, int capacity) {
    return (key % capacity + capacity) % capacity;
}

void insertIntoHash(HashMap* map, int key) {
    int index = hash(key, map->capacity);
    Entry* head = map->buckets[index];
    Entry * newEntry = malloc(sizeof(Entry));
    newEntry->key = key;
    newEntry->value = 1;
    newEntry->next = head;
    map->buckets[index] = newEntry;
}

bool isExist(HashMap* map, int key) {
    /// if element in map return true;
    int index = hash(key, map->capacity);
    Entry * entry = map->buckets[index];
    if(entry != NULL)  {
        if(entry->key == key) {
            return true;
        }
        entry = entry->next;
    }
    return false;
}

int* targetPairs(int* arr, int arrSize, int target, int* returnSize) {
    // map implementation (structs created)
    HashMap * map = createHashMap(1000);
    int* resultsList = malloc(sizeof(int) * 2 * 100); // up tp 100 pairs
    int resultsIndex = 0;
    for (int i = 0; i < arrSize; i++) {
        int complement = target - arr[i];
        if(isExist(map, complement)) {
            resultsList[resultsIndex++] = complement;
            resultsList[resultsIndex++] = arr[i];
        }
        insertIntoHash(map, arr[i]);
    }
    *returnSize = resultsIndex;
    free(map->buckets);
    free(map);
    return resultsList;
}
