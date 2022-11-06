#include "array.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        setbuf(stdin, NULL);
    }
}

void print_array(const int array[], const unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
}

int search_max(const int array[], const unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int search_index(const int array[], const unsigned int size, const int number)
{
    int search = 0;

    for (unsigned int i = 0; i < size; i++) {
        if (array[i] == search) {
            search = i;
            break;
        }
    }
    return search;
}

int search_min(const int array[], const unsigned int size)
{
    int min = array[0];
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void reverse_array(int *array, const unsigned int size)
{
    int reverse = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; i++, j--) {
        array[i] = array[j];
        array[j] = reverse;
        reverse = array[i + 1];
    }
}

void sorting(int *array, const unsigned int size)
{
    int tmp = 0;

    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                tmp = array[j + 1];
            }
        }
    }
}

int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond)
{
    int res = 1;
    if(sizeFirst == sizeSecond) {
        for (unsigned int i = 0; i < sizeSecond; i++) {
            if (arrayFirst[i] != arraySecond[i]) {
                res = 0;
                break;
            }
        }
    } else {
        res = 0;
    }
        return res;
}

int binarysearch(int arrayFirst[], int sizeFirst, int number)
{
    int min_i = 0;
    int max_i = sizeFirst;
    int mid_i = max_i / 2;
    int res = -1;
    while (1) {
        if (number > arrayFirst[mid_i]) {
            min_i = mid_i;
            mid_i = (min_i + max_i) / 2;
        } else if (number == arrayFirst[mid_i]) {
            res = mid_i;
            break;
        } else {
            max_i = mid_i;
            mid_i = (max_i + mid_i - 1) / 2;
        }
        if ((mid_i == 0 || mid_i == sizeFirst - 1) &&
            number != arrayFirst[mid_i]) {
            break;
        }
    }
    return res;
}
