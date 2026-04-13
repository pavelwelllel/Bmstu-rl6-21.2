#ifndef BOX_H
#define BOX_H

#include <iostream>

struct Box {
    int len;
    int width;
    int height;
    int volume;
    
    Box();
    Box(int value);
    Box(int l, int w, int h);
    void calculateVolume();
};

std::ostream& operator<<(std::ostream& os, const Box& box);

#endif
