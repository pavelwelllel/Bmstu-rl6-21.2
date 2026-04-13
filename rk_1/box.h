#ifndef BOX_H
#define BOX_H

#include <iostream>

struct Box {
    int len;
    int width;
    int height;
    int volume;
    
    // Конструктор по умолчанию (все стороны = 10)
    Box();
    
    // Конструктор с одним параметром
    Box(int value);
    
    // Конструктор с тремя параметрами (len, width, height)
    Box(int l, int w, int h);
    
    // Функция для вычисления объема
    void calculateVolume();
};

// Перегрузка оператора вывода
std::ostream& operator<<(std::ostream& os, const Box& box);

#endif