#include <iostream>
#include "sorts.h"

// SW_1_1 + SW_1_2 + SW_1_addon: Полное тестирование с вводом массива

int main() {
    std::cout << "\n========================================" << std::endl;
    std::cout << "  SW_1 - Sorting and Array Checker" << std::endl;
    std::cout << "========================================\n" << std::endl;
    
    // ========== ВЫБОР СПОСОБА ВВОДА ==========
    int inputChoice;
    std::cout << "How to input array?" << std::endl;
    std::cout << "1. From keyboard" << std::endl;
    std::cout << "2. From file" << std::endl;
    std::cout << "Your choice: ";
    std::cin >> inputChoice;
    
    unsigned int size;
    int* arr = nullptr;
    
    if (inputChoice == 1) {
        arr = inputArrayFromKeyboard(size);
    } 
    else if (inputChoice == 2) {
        char filename[256];
        std::cout << "Enter filename with its format: ";
        std::cin >> filename;
        arr = inputArrayFromFile(filename, size);
    } 
    else {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }
    
    if (arr == nullptr) {
        std::cout << "Failed to load array!" << std::endl;
        return 1;
    }
    
    // ========== ВЫВОД ИСХОДНОГО МАССИВА ==========
    std::cout << "\n--- Original array ---" << std::endl;
    std::cout << "Array (" << size << " elements): ";
    printArray(arr, size);
    
    // ========== SW_1_2: ПРОВЕРКА НА ОТСОРТИРОВАННОСТЬ ==========
    std::cout << "\n=== SW_1_2: Checking if array is sorted ===" << std::endl;
    
    int sorted = isSorted(arr, size);
    
    if (sorted == 1) {
        std::cout << "Result: Array is sorted in ASCENDING order!" << std::endl;
    } 
    else if (sorted == -1) {
        std::cout << "Result: Array is sorted in DESCENDING order!" << std::endl;
    } 
    else {
        std::cout << "Result: Array is NOT sorted!" << std::endl;
    }
    
    // ========== SW_1_1: СОРТИРОВКА (если нужно) ==========
    std::cout << "\n=== SW_1_1: Do you want to sort the array? ===" << std::endl;
    char sortChoice;
    std::cout << "Sort? (y/n): ";
    std::cin >> sortChoice;
    
    if (sortChoice == 'y' || sortChoice == 'Y') {
        int orderChoice;
        std::cout << "Choose order:" << std::endl;
        std::cout << "1. Ascending (small to large)" << std::endl;
        std::cout << "2. Descending (large to small)" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> orderChoice;
        
        if (orderChoice == 1) {
            selectionSort(arr, size, true);
            std::cout << "\nSorted ascending: ";
        } 
        else if (orderChoice == 2) {
            selectionSort(arr, size, false);
            std::cout << "\nSorted descending: ";
        } 
        else {
            std::cout << "Invalid choice! Sorting ascending by default." << std::endl;
            selectionSort(arr, size, true);
            std::cout << "\nSorted ascending: ";
        }
        printArray(arr, size);
        
        // Проверка результата сортировки
        int afterSort = isSorted(arr, size);
        std::cout << "\nVerification after sorting: ";
        if (afterSort == 1) {
            std::cout << "Array is now sorted ascending!" << std::endl;
        } 
        else if (afterSort == -1) {
            std::cout << "Array is now sorted descending!" << std::endl;
        }
    } 
    else {
        std::cout << "\nExiting without sorting." << std::endl;
    }
    
    // ========== ОСВОБОЖДАЕМ ПАМЯТЬ ==========
    freeArray(arr);
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "Program finished!" << std::endl;
    std::cout << "========================================" << std::endl;
    
    return 0;
}