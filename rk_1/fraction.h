#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
    
    Fraction();
    Fraction(int num, int denom);
    void reduce();
};

Fraction sum(const Fraction& fr1, const Fraction& fr2);
Fraction sub(const Fraction& fr1, const Fraction& fr2);
Fraction div(const Fraction& fr1, const Fraction& fr2);
Fraction mul(const Fraction& fr1, const Fraction& fr2);

std::ostream& operator<<(std::ostream& os, const Fraction& fr);
int gcd(int a, int b);

#endif