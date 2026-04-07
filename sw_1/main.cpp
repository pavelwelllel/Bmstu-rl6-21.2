#include <iostream>
#include "sorts.h"

// SW_1_1: Тестирование сортировки выбором
// SW_1_2: Добавлено тестирование проверки на отсортированность

int main() {
    // ========== SW_1_1: Тестирование сортировки ==========
    int ar[] = {1, 2, 6, 3, 5};
    
    std::cout << "=== SW_1_1 Test ===" << std::endl;
    std::cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
    
    // Тест сортировки по возрастанию
    selectionSort(ar, 5, true);
    std::cout << "Ascending sort: ";
    for (int i = 0; i < 5; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
    
    // Тест сортировки по убыванию
    int ar2[] = {1, 2, 6, 3, 5};
    selectionSort(ar2, 5, false);
    std::cout << "Descending sort: ";
    for (int i = 0; i < 5; i++) {
        std::cout << ar2[i] << " ";
    }
    std::cout << std::endl << std::endl;
    
    // ========== SW_1_2: Тестирование проверки на отсортированность ==========
    std::cout << "=== SW_1_2 Test ===" << std::endl;
    
    int ar1[] = {1, 2, 3, 4, 5};
    int ar2_sorted[] = {5, 4, 3, 2, 1};
    int ar3[] = {5, 4, 3, 2, 10};
    
    std::cout << "Array {1,2,3,4,5}: " << isSorted(ar1, 5);
    std::cout << " (1=ascending)" << std::endl;
    
    std::cout << "Array {5,4,3,2,1}: " << isSorted(ar2_sorted, 5);
    std::cout << " (-1=descending)" << std::endl;
    
    std::cout << "Array {5,4,3,2,10}: " << isSorted(ar3, 5);
    std::cout << " (0=not sorted)" << std::endl;
    
    return 0;
}