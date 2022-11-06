#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

matrix_t allocate_matrix(const unsigned int rows, const unsigned int cols)
{
    matrix_t neo;
    neo.cols = cols;
    neo.rows = rows;
    neo.matrix = (double **)calloc(rows, sizeof(double));
    for (unsigned int i = 0; i < rows; ++i) {
        neo.matrix[i] = (double *)calloc(cols, sizeof(double));
    }

    return neo;
}

void fill_array(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            scanf("%lf", &matrix->matrix[i][j]);
            setbuf(stdin, NULL);
        }
    }
}
void print_matrix(matrix_t *matrix)
{

    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            printf(" %.2f ", matrix->matrix[i][j]);
        }
    }

    printf("\n");
}

void free_matrix(matrix_t *matrix)
{

    for (int i = 0; i < matrix->rows; ++i) {
        free(matrix->matrix[i]);
    }
    free(matrix->matrix);
}

int eq_matrix(matrix_t *a, matrix_t *b)
{
    int res = 0;
    if (a->rows == b->rows && a->cols == b->cols) {
        res = 1;
        printf("%d", res);
    }
    return res;
}
