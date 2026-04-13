#include "box.h"

Box::Box() : len(10), width(10), height(10) {
    calculateVolume();
}

Box::Box(int value) : len(value), width(value), height(value) {
    calculateVolume();
}

Box::Box(int l, int w, int h) : len(l), width(w), height(h) {
    calculateVolume();
}

void Box::calculateVolume() {
    volume = len * width * height;
}

std::ostream& operator<<(std::ostream& os, const Box& box) {
    os << "len = " << box.len << ", width = " << box.width 
       << ", height = " << box.height << ", volume = " << box.volume << "\n";
    return os;
}