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