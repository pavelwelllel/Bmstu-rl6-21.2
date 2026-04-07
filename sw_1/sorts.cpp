#include "sorts.h"

// SW_1_1: Реализация сортировки выбором
void selectionSort(int* ar, unsigned int size, bool ascending) {
    for (unsigned int i = 0; i < size - 1; i++) {
        unsigned int targetIndex = i;
        
        for (unsigned int j = i + 1; j < size; j++) {
            if (ascending) {
                // По возрастанию: ищем МЕНЬШИЙ элемент
                if (ar[j] < ar[targetIndex]) {
                    targetIndex = j;
                }
            } else {
                // По убыванию: ищем БОЛЬШИЙ элемент
                if (ar[j] > ar[targetIndex]) {
                    targetIndex = j;
                }
            }
        }
        
        // Меняем местами
        if (targetIndex != i) {
            int temp = ar[i];
            ar[i] = ar[targetIndex];
            ar[targetIndex] = temp;
        }
    }
}

// SW_1_2: Проверка массива на отсортированность
int isSorted(const int* array, unsigned int size) {
    if (size <= 1) return 1; // Пустой или из 1 элемента считается по возрастанию
    
    bool ascending = true;  // Предполагаем, что по возрастанию
    bool descending = true; // Предполагаем, что по убыванию
    
    for (unsigned int i = 0; i < size - 1; i++) {
        if (array[i] < array[i + 1]) {
            descending = false; // Если есть возрастание, то не по убыванию
        }
        if (array[i] > array[i + 1]) {
            ascending = false; // Если есть убывание, то не по возрастанию
        }
    }
    
    if (ascending) return 1;
    if (descending) return -1;
    return 0;
}