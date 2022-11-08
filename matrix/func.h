#ifndef _FUNC_H_
#define _FUNC_H_

typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

matrix_t create_matrix(const unsigned int rows, const unsigned int cols);
void print_matrix(matrix_t *matrix);
void free_matrix(matrix_t *matrix);
void fill_matrix(matrix_t *matrix);
int eq_size(matrix_t *neo, matrix_t *Morfius);
int eq_matrix(matrix_t *neo, matrix_t *Morfius);
matrix_t sum_matrix(matrix_t *A, matrix_t *B);
matrix_t sub_matrix(matrix_t *A, matrix_t *B);
matrix_t mult_num(matrix_t *A, matrix_t *B);
matrix_t mult_matrix(matrix_t *A, matrix_t *B);
matrix_t swap(matrix_t *A, matrix_t *B);

#endif // _FUNC_H_