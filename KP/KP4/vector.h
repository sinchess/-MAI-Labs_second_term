#ifndef VECTOR_H_
#define VECTOR_H_

#include <stdlib.h>

typedef struct {
    char *data;
    size_t size;
    size_t capacity;
} vector_str;

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} vector_int;

#endif