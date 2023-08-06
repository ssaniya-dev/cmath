#include <stdio.h>
#include "linear.hpp"
#include "vector.hpp"
int main()
{
    printf("Hello, world!\n");
    Vector v = vector(1.0f, 2.0f, -3.0f);
    print(v);
    Vector v2 = scalar_mult(v, 3.0f);
    print(v2);
    Vector v3 = add(v, v2);
    print(v3);
    Vector v4 = divide(v3, v2);
    print(v4);
    Vector v5 = cross(v, v2);
    print(v5);
    Vector v6 = unit(v);
    print(v6);


    return 0;
}