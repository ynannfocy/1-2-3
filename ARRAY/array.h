#ifndef _ARRAY_H_
#define _ARRAY_H_
// заполнение массива с клавиатуры
void fill_array(int *array, const unsigned int size);
// вывод массива в терминал
void print_array(const int array[], const unsigned int size);
// нахождение максимального значения элемента
int search_max(const int array[], const unsigned int size);
// нахождение минимального значения элемента
int search_min(const int array[], const unsigned int size);
// изменить массив в обратный порядок
void reverse_array(int *array, const unsigned int size);
// Сортирует от меньшего к большему
void sorting(int *array, const unsigned int size);
// поиск значения в массиве(возвращает индекс или 0)
int search_index(const int array[], const unsigned int size, const int number);
// функция сравнения двух массивов(возвращает 1 или 0)
int equal(const int arrayFirst[], const unsigned int sizeFirst,
          const int arraySecond[], const unsigned int sizeSecond);
// Бинарный поиск
int binarysearch(int arrayFirst[], int sizeFirst, const int number);
#endif // _ARRAY_H_