#ifndef _MATRIX_H_
#define _MATRIX_H_
typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

matrix_t allocate_matrix(const unsigned int rows, const unsigned int cols);

void print_matrix(matrix_t *matrix);
void fill_array(matrix_t *matrix);
void print_matrix(matrix_t *matrix);
void free_matrix(matrix_t *matrix);
int eq_matrix(matrix_t *a, matrix_t *b);
int eq_size(matrix_t *a, matrix_t *b);
#endif //_MATRIX_H_