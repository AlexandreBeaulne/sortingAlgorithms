#ifndef TEST
#define TEST

#include "vector.h"

typedef struct vector* (*sortFun)(struct vector *);
void testSort(sortFun);

#endif

