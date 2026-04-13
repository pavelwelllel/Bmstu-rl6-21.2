#include "box.h"

int main() {
    const struct Box temp(15);
    std::cout << temp;
    
    const struct Box temp1();
    std::cout << temp1;
    
    const struct Box temp2(5, 10, 11);
    std::cout << temp2;
    
    return 0;
}