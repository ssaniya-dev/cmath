#include "vector.hpp"

const Vector VECTOR_UNDEFINED = {0, NULL};

/**
 * Allocate memory to the vector
*/
Vector allocate_mem(unsigned int capacity) {
    Vector vec = {capacity, new float[capacity]};
    return vec;
}

/**
 * Construct a default vector
*/
Vector vector_default(unsigned int capacity, float val) {
    Vector vec = allocate_mem(capacity);
    for (unsigned int i = 0; i < capacity; i++) {
        vec.values[i] = val;
    }
    return vec;
}

/**
 * Initialize a vector
*/
Vector vector_init(unsigned int numArgs, ...) {
    Vector vec = allocate_mem(numArgs);
    va_list args;
    va_start(args, numArgs);
    for (int i = 0; i < numArgs; i++) {
        vec.values[i] = va_arg(args, double);
    }
    va_end(args);
    return vec;
}

/**
 * Shallow copies a vector
*/
Vector shallowcopy(Vector v) {
    return v;
}

/**
 * Deep copies a vector
*/
Vector deepcopy(Vector *v) {
    Vector vec = allocate_mem(v->capacity);
    for (unsigned int i = 0; i < v->capacity; i++) {
        vec.values[i] = v->values[i];
    }
    return vec;
}

/**
 * Print a vector
*/
void print(Vector v) {
    printf("[");
    for (unsigned int i = 0; i < v.capacity; i++) {
        printf("%f", v.values[i]);
        if (i < v.capacity - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

/**
 * Sees of two vectors are equal
*/
bool equals(Vector v1, Vector v2) {
    if (v1.capacity != v2.capacity) {
        return false;
    }
    for (unsigned int i = 0; i < v1.capacity; i++) {
        if (v1.values[i] != v2.values[i]) {
            return false;
        }
    }
    return true;
}

/**
 * Adding two vectors
*/
Vector add(Vector v1, Vector v2) {
    if (v1.capacity != v2.capacity) {
        return VECTOR_UNDEFINED;
    }
    Vector vec = allocate_mem(v1.capacity);
    for (unsigned int i = 0; i < v1.capacity; i++) {
        vec.values[i] = v1.values[i] + v2.values[i];
    }
    return vec;
}

/**
 * Subtracting two vectors
*/
Vector subtract(Vector v1, Vector v2) {
    if (v1.capacity != v2.capacity) {
        return VECTOR_UNDEFINED;
    }
    Vector vec = allocate_mem(v1.capacity);
    for (unsigned int i = 0; i < v1.capacity; i++) {
        vec.values[i] = v1.values[i] - v2.values[i];
    }
    return vec;
}

/**
 * Dot product of two vectors
*/
float dot(Vector v1, Vector v2) {
    if (v1.capacity != v2.capacity) {
        return 0.0f;
    }
    float sum = 0.0f;
    for (unsigned int i = 0; i < v1.capacity; i++) {
        sum += v1.values[i] * v2.values[i];
    }
    return sum;
}

/**
 * Cross product of two vectors
*/
Vector cross(Vector v1, Vector v2) {
    // IMPLEMENT THIS LATER
    return v1
}

/**
 * Scalar multiplication of a vector
*/
Vector scalar_mult(Vector v, float scalar) {
    Vector vec = allocate_mem(v.capacity);
    for (unsigned int i = 0; i < v.capacity; i++) {
        vec.values[i] = v.values[i] * scalar;
    }
    return vec;
}

/**
 * Scalar division of a vector
*/
Vector scalar_div(Vector v, float scalar) {
    Vector vec = allocate_mem(v.capacity);
    for (unsigned int i = 0; i < v.capacity; i++) {
        vec.values[i] = v.values[i] / scalar;
    }
    return vec;
}


