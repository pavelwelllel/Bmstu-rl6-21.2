#ifndef SORTS_H
#define SORTS_H

// SW_1_1: Функция сортировки выбором
void selectionSort(int* ar, unsigned int size, bool ascending);

// SW_1_2: Функция для проверки массива на отсортированность
int isSorted(const int* array, unsigned int size);

// SW_1_addon: Функции для ввода/вывода массива
int* inputArrayFromKeyboard(unsigned int& size);
int* inputArrayFromFile(const char* filename, unsigned int& size);
void printArray(const int* ar, unsigned int size);
void freeArray(int* ar);

#endif