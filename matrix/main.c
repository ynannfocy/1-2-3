#include "func.h"
#include <stdio.h>
#include <stdlib.h>

#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 3

int main()
{
    matrix_t Morfius;
    Morfius = create_matrix(rows, cols);
    fill_matrix(&Morfius);
    matrix_t neo;
    neo = create_matrix(rows, cols);
    fill_matrix(&neo);

    print_matrix(&Morfius);
    printf("\n");
    print_matrix(&neo);

    printf("Сумма матриц - \n");
    matrix_t sum = sum_matrix(&neo, &Morfius);
    print_matrix(&sum);

    printf("Разница матриц - \n");
    matrix_t sub = sub_matrix(&neo, &Morfius);
    print_matrix(&sub);

    printf("Умножение матрицы на число - \n");
    matrix_t mult = mult_num(&neo, &Morfius);
    print_matrix(&mult);

    printf("Умножение матриц - \n");
    matrix_t mult_m = mult_matrix(&neo, &Morfius);
    print_matrix(&mult_m);

    printf("Меняет местами   - \n");
    matrix_t to_swap = swap(&neo, &Morfius);
    print_matrix(&to_swap);

    /* int res = eq_size(&neo, &Morfius);
     printf("res = %d \n", res);
     int equals = eq_matrix(&neo, &Morfius);
     printf("equals = %d \n", equals);
     free_matrix(&neo);
     free_matrix(&Morfius);*/
}