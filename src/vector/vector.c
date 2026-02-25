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

    for (int i = 0; i < u->size; i++)
    {
        values[i] = u->values[i];
    }

    for (int i = 0; i < v->size; i++)
    {
        values[i] = v->values[i];
    }

    struct Vector* res = malloc(sizeof(struct Vector));

    res->size = size;
    res->values = values;
    
    return values;
}
