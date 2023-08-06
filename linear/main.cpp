#include <stdio.h>
#include "linear.hpp"
#include "vector.hpp"
int main()
{
    printf("Hello, world!\n");
    Vector v = vector_default(5,1.0);
    Vector v2 = vector_default(5, 2.0);
    printf("%d\n", equals(v, v2));
    return 0;
}