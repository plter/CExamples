//
// Created by plter on 1/13/16.
//

#ifndef DYNAMICARRAY_ARRAY_H
#define DYNAMICARRAY_ARRAY_H



typedef struct {
    int length_;
    int capacity_;
    void **items_;
} Array;

Array *Array_create();
void Array_free(Array *arr);
void Array_add(Array *arr,void* item);
void * Array_get(Array *arr,int index);
int Array_length(Array *arr);
int Array_capacity(Array *arr);


#endif //DYNAMICARRAY_ARRAY_H
