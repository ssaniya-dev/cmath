#include <stdio.h>
#include <stdarg.h>
#include "linear.hpp"

#ifndef VECTOR_HPP 
#define VECTOR_HPP

typedef struct {
    unsigned int capacity;
    float *values;
} Vector;

extern const Vector VECTOR_UNDEFINED;

#endif