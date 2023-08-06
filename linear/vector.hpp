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

/**
 * Allocate memory to the vector
*/
Vector allocate_mem(unsigned int capacity);

/**
 * Construct a default vector
*/
Vector vector_default(unsigned int capacity, float val);

/**
 * Initialize a vector
*/
Vector vector_init(unsigned int numArgs, ...);

/**
 * Get number of arguments in list
*/
#define vector(...) vector_init(NUMARGS(float, __VA_ARGS__), ##__VA_ARGS__)

/**
 * Shallow copies a vector 
*/
Vector shallowcopy(Vector v);

/**
 * Deep copies a vector 
*/
Vector deepcopy(Vector *v);

/**
 * Print a vector
*/
void print(Vector v);

/**
 * Sees of two vectors are equal
*/
bool equals(Vector v1, Vector v2);

/**
 * Adding two vectors 
*/
Vector add(Vector v1, Vector v2);

/**
 * Subtracting two vectors
*/
Vector subtract(Vector v1, Vector v2);

/**
 * Dot product of two vectors
*/
float dot(Vector v1, Vector v2);

/**
 * Cross product of two vectors
*/
Vector cross(Vector v1, Vector v2);

/**
 * Scalar multiplication of a vector
*/
Vector scalar_mult(Vector v, float scalar);

/**
 * Scalar division of a vector
*/
Vector scalar_div(Vector v, float scalar);

#endif