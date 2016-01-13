#include <stdio.h>
#include "Array.h"


int main() {

    Array *arr = Array_create();

    for (int i = 0; i < 100; ++i) {
        Array_add(arr, "Hello World");
    }

    printf("Array{length:%d,capacity:%d}\n", Array_length(arr), Array_capacity(arr));

    for (int j = 0; j < Array_length(arr); ++j) {
        printf("Current Item is %s\n", (char *) Array_get(arr, j));
    }

    Array_free(arr);

    return 0;
}