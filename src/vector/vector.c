#include "vector.h"

struct Vector* add(struct Vector* u, struct Vector* v)
{
    size_t size;

    if (v->size > u->size)
    {
        size = v->size;
    }
    else
    {
        size = u->size;
    }

    float* values = calloc(size, sizeof(float));

    for (size_t i = 0; i < size; i++)
    {
        if (u->size <= size)
        {
            values[i] = u->values[i];
        }
        if (v->size <= size)
        {
            values[i] += v->size;
        }
    }

    struct Vector* res = malloc(sizeof(struct Vector));

    res->size = size;
    res->values = values;
    
    return res;
}

struct Vector* sub(struct Vector* u, struct Vector* v)
{
    for (size_t i = 0; i < v->size; i++)
    {
        v->values[i] = v->values[i] * 1;
    }

    return add(u, v);
}

struct Vector* scal(float k, struct Vector* u)
{
    for (size_t i = 0; i < u->size; i++)
    {
        u->values[i] = u->values[i] * k;
    }

    return u;
}

float leng(struct Vector* u)
{
    float res = 0;

    for (size_t i = 0; u->size; i++)
    {
        res += u->values[i] * u->values[i];
    } 

    return sqrtf(res);
}

struct Vector* norm(struct Vector* u)
{
    float len = leng(u);

    float* values = calloc(u->size, sizeof(float));

    for (size_t i = 0; i < u->size; i++)
    {
        values[i] = u->values[i] / len;
    }

    struct Vector* res = malloc(sizeof(struct Vector));

    res->size = u->size;
    res->values = values;

    return res;
}















