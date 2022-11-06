#include "array.h"
#include <stdio.h>
#define SIZE_1 10
#define SIZE_2 10
#define Find 9

int main()
{
    int arrayFirst[SIZE_1] = {0};
    int arraySecond[SIZE_2] = {0};

    fill_array(arrayFirst, SIZE_1);
    fill_array(arraySecond, SIZE_2);

    print_array(arrayFirst, SIZE_1);
    print_array(arraySecond, SIZE_2);

    printf("max - %d \n", search_max(arrayFirst, SIZE_1));
    printf("min - %d \n", search_min(arrayFirst, SIZE_1));

    reverse_array(arrayFirst, SIZE_1);
    print_array(arrayFirst, SIZE_1);

    printf("Index = %d \n", search_index(arrayFirst, SIZE_1, 5));
    int res = equal(arrayFirst, SIZE_1, arraySecond, SIZE_2);
    printf("res = %d\n", res);

    sorting(arrayFirst, SIZE_1);
    print_array(arrayFirst, SIZE_1);

    binarysearch(arrayFirst, SIZE_1, Find);
    int a = binarysearch(arrayFirst, SIZE_1, Find);
    printf("%d \n", a);
}