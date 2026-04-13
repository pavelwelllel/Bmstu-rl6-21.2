#include "fraction.h"
#include <cstdlib>

int gcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        denominator = 1;
    }
    reduce();
}

void Fraction::reduce() {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
    
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Fraction sum(const Fraction& fr1, const Fraction& fr2) {
    int num = fr1.numerator * fr2.denominator + fr2.numerator * fr1.denominator;
    int denom = fr1.denominator * fr2.denominator;
    return Fraction(num, denom);
}

Fraction sub(const Fraction& fr1, const Fraction& fr2) {
    int num = fr1.numerator * fr2.denominator - fr2.numerator * fr1.denominator;
    int denom = fr1.denominator * fr2.denominator;
    return Fraction(num, denom);
}

Fraction mul(const Fraction& fr1, const Fraction& fr2) {
    int num = fr1.numerator * fr2.numerator;
    int denom = fr1.denominator * fr2.denominator;
    return Fraction(num, denom);
}

Fraction div(const Fraction& fr1, const Fraction& fr2) {
    int num = fr1.numerator * fr2.denominator;
    int denom = fr1.denominator * fr2.numerator;
    return Fraction(num, denom);
}

std::ostream& operator<<(std::ostream& os, const Fraction& fr) {
    os << fr.numerator << " / " << fr.denominator;
    return os;
}
