//
// Created by plter on 1/13/16.
//

#include <MacTypes.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "Array.h"


static void *allocItemsMemoryByCapacity(Array *arr) {
    return malloc(sizeof(void *) * arr->capacity_);
}

Array *Array_create() {
    Array *arr = malloc(sizeof(Array));
    arr->length_ = 0;
    arr->capacity_ = 32;
    arr->items_ = allocItemsMemoryByCapacity(arr);
    return arr;
}

void Array_free(Array *arr) {
    free(arr->items_);
    free(arr);
}


void Array_add(Array *arr, void *item) {
    if (arr->length_ >= arr->capacity_) {
        arr->capacity_ *= 2;
        void **tmp = arr->items_;
        arr->items_ = allocItemsMemoryByCapacity(arr);
        memcpy(arr->items_, tmp, arr->length_ * sizeof(void *));
        free(tmp);
    }

    arr->items_[arr->length_] = item;
    arr->length_++;
}

void *Array_get(Array *arr, int index) {
    assert(index >= 0 && index < arr->length_);
    return arr->items_[index];
}

int Array_length(Array *arr) {
    return arr->length_;
}

int Array_capacity(Array *arr) {
    return arr->capacity_;
}
