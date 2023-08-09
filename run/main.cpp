#include <stdio.h>
#include "../linear/linear.hpp"
#include "../linear/vector.hpp"
#include "../linear/matrix.hpp"
int main()
{
    Matrix m = matrix_init(2, 2, 1.0f, 2.0f, 3.0f, 4.0f);
    Matrix m2 = matrix_deepcopy(&m);
    matrix_print(m);
    matrix_print(m2);
    return 0;
} 