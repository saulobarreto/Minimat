#include <stdio.h>
#include <stdlib.h>
#include "minimat.h"

int main()
{
    double a_content[3][3] = {9,3,4,5,6,7,2,3,4};
    double b_content[3][3] = {0,4,5,6,7,8,3,4,5};
    double c_content[3][3] = {0,0,0,0,0,0,0,0,0};
    MAT a={3,3,&a_content};
    MAT b={3,3,&b_content};
    MAT c={3,3,&c_content};

    mat_print(a);
    mat_print(b);
    mat_sum(a,b,c);
    mat_print(c);
    mat_sub(a,b,c);
    mat_print(c);
    mat_escmult(a,b,c);
    mat_print(c);
    printf("\n%f\n",mat_sumall(a));
    printf("\n%f\n",mat_avg(a));
    mat_constmult(a,2);
    mat_print(a);

    return 0;
}
