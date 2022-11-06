#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

#define Rows 3
#define Cols 4

int main()
{
    /* double **matrix = allocate_matrix(Rows, Cols);
     print_matrix(matrix, Rows, Cols);
     free_matrix(matrix, Cols);*/
    matrix_t neo;
    neo = allocate_matrix(Rows, Cols);
    matrix_t Morfius;
    Morfius = allocate_matrix(Rows, Cols);
    print_matrix(&neo);
    fill_array(&neo);
    print_matrix(&neo);
    free_matrix(&neo);
    eq_matrix(&Morfius);
}