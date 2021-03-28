#include "minimat.h"

int mat_print(MAT m)
{
    int row_counter=0;

    int column_counter=0;

    int offset=0;

    printf("\n\n");

    for( row_counter=0 ; row_counter<m.rows ; row_counter++ )
    {
        for( column_counter=0 ; column_counter<m.columns ; column_counter++ )
        {
            printf("%f ", *(m.content+offset));
            offset++;
        }
        printf("\n");
    }

    printf("\n");

    int elements = row_counter*column_counter;

    printf("%d\n\n",elements);

    return (elements);
}

int mat_sum(MAT a, MAT b, MAT c)
{
    int check_a = a.rows * a.columns;

    int check_b = b.rows * b.columns;

    int check_c = c.rows * c.columns;

    int counter = check_a;

    for ( counter=0 ; counter<check_a ; counter++ )
    {
        *(c.content+counter) = *(a.content+counter) + *(b.content+counter);
    }
    return (counter);
}

int mat_sub(MAT a, MAT b, MAT c)
{
    int check_a = a.rows * a.columns;

    int check_b = b.rows * b.columns;

    int check_c = c.rows * c.columns;

    int counter = check_a;

    for ( counter=0 ; counter<check_a ; counter++ )
    {
        *(c.content+counter) = *(a.content+counter) - *(b.content+counter);
    }
    return (counter);
}

int mat_escmult(MAT a, MAT b, MAT c)
{
    int check_a = a.rows * a.columns;

    int check_b = b.rows * b.columns;

    int check_c = c.rows * c.columns;

    int counter = check_a;

    for ( counter=0 ; counter<check_a ; counter++ )
    {
        *(c.content+counter) = *(a.content+counter) * *(b.content+counter);
    }
    return (counter);
}

int mat_constmult(MAT a, double k)
{
    int check_a = a.rows * a.columns;

    int counter = check_a;

    for ( counter=0 ; counter<check_a ; counter++ )
    {
        *(a.content+counter) = *(a.content+counter) * k;
    }
    return (counter);
}

double mat_sumall(MAT a)
{
    int counter=0;
    double accumlator=0;
    int elem_a = a.rows * a.columns;

    for ( counter=0 ; counter<elem_a ; counter++ )
    {
        accumlator = accumlator + *(a.content+counter);
    }
    return (accumlator);
}

double mat_avg(MAT a)
{
    int counter=0;
    double accumlator=0;
    int elem_a = a.rows * a.columns;

    for ( counter=0 ; counter<elem_a ; counter++ )
    {
        accumlator = accumlator + *(a.content+counter);
    }
    return (accumlator/(double)elem_a);
}
