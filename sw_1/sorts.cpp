#include "sorts.h"
#include <iostream>
#include <fstream>

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

// SW_1_addon: Ввод массива с клавиатуры
int* inputArrayFromKeyboard(unsigned int& size) {
    std::cout << "Enter array size: ";
    std::cin >> size;
    
    if (size == 0) {
        std::cout << "Error: Size cannot be 0!" << std::endl;
        return nullptr;
    }
    
    int* ar = new int[size];
    std::cout << "Enter " << size << " elements (space separated): ";
    for (unsigned int i = 0; i < size; i++) {
        std::cin >> ar[i];
    }
    
    return ar;
}

// SW_1_addon: Ввод массива из файла
int* inputArrayFromFile(const char* filename, unsigned int& size) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file '" << filename << "'" << std::endl;
        return nullptr;
    }
    
    // Первое число в файле - размер массива
    file >> size;
    
    if (size == 0) {
        std::cerr << "Error: Size cannot be 0 in file!" << std::endl;
        file.close();
        return nullptr;
    }
    
    int* ar = new int[size];
    for (unsigned int i = 0; i < size; i++) {
        file >> ar[i];
    }
    
    file.close();
    
    std::cout << "Successfully read " << size << " elements from file" << std::endl;
    return ar;
}

// SW_1_addon: Вывод массива на экран
void printArray(const int* ar, unsigned int size) {
    if (ar == nullptr) {
        std::cout << "Array is empty" << std::endl;
        return;
    }
    
    for (unsigned int i = 0; i < size; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

// SW_1_addon: Освобождение памяти
void freeArray(int* ar) {
    delete[] ar;
}