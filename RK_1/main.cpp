#include "box.h"
#include "fraction.h"
#include <iostream>

int main() {
    std::cout << "========== TASK 1: Box ==========" << std::endl;
    
    const Box temp(15);
    std::cout << temp;
    
    const Box temp1;
    std::cout << temp1;
    
    const Box temp2(5, 10, 11);
    std::cout << temp2;
    
    std::cout << "\n========== TASK 2: Fraction ==========" << std::endl;
    
    Fraction fr1(10, 20);
    Fraction fr2(5, 7);
    
    std::cout << sum(fr1, fr2) << std::endl;
    std::cout << sub(fr1, fr2) << std::endl;
    std::cout << div(fr1, fr2) << std::endl;
    std::cout << mul(fr1, fr2) << std::endl;
    
    return 0;
}