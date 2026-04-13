#include "box.h"

int main() {
    const struct Box temp(15);
    std::cout << temp;
    
    const struct Box temp1();
    std::cout << temp1;
    
    const struct Box temp2(5, 10, 11);
    std::cout << temp2;
    
    return 0;
}#include "fraction.h"
#include <iostream>

int main() {
    Fraction fr1(10, 20);
    Fraction fr2(5, 7);
    
    std::cout << sum(fr1, fr2) << std::endl;
    std::cout << sub(fr1, fr2) << std::endl;
    std::cout << div(fr1, fr2) << std::endl;
    std::cout << mul(fr1, fr2) << std::endl;
    
    return 0;
}