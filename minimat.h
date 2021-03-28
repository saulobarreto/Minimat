typedef struct MAT
{
    int rows;
    int columns;
    double *content;
}MAT;

int mat_print(MAT m);

int mat_sum(MAT a, MAT b, MAT c);

int mat_sub(MAT a, MAT b, MAT c);

int mat_escmult(MAT a, MAT b, MAT c);

int mat_constmult(MAT a, double k);

double mat_sumall(MAT a);

double mat_avg(MAT a);

