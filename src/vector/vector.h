#pragma once

#include <stdlib.h>
#include <stddef.h>
#include <math.h>

struct Vector {
    size_t size;

    float* values;
};

struct Vector* add(struct Vector* u, struct Vector* v); // Addition of 2 vectors. Will return a new pointer.

struct Vector* sub(struct Vector* u, struct Vector* v); // Substraction of 2 vectors. Will return a new pointer.

struct Vector* scal(float k, struct Vector* u); // Scalar of a vector with a float k. Will return the same pointer.

float leng(struct Vector* u); // Length of a vector. Will return a float, the given pointer will not be freed.

struct Vector* norm(struct Vector* u); // Normalization of a vector. Will return a new pointer.
