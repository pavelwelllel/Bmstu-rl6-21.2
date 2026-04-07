#include <iostream>
#include "sorts.h"

// SW_1_1: Тестирование сортировки выбором
int main() {
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
    std::cout << std::endl;
    
    return 0;
}