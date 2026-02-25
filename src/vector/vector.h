#pragma once

struct Vector {
    size_t size;

    float* values;
}

struct Vector* add(struct Vector* u, struct Vector* v); // Addition of 2 vectors

struct Vector* sub(struct Vector* u, struct Vector* v); // Substraction of 2 vectors

struct Vector* scal(float k, struct Vector* u); // Scalar of a vector with a float k

float leng(struct Vector* u); // Length of a vector

struct Vector* norm(struct Vector* u); // Normalization of a vector
