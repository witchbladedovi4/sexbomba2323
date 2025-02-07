#include "52yariklohh.hpp"
#include <stdexcept>

Integer::Integer(int val) : value(val) {}



bool Integer::Integer::isEven() {
    return value % 2 == 0;
}

bool Integer::isOdd() {
    return value % 2 != 0;
}

bool Integer::isPositive() {
    return value > 0;
}

bool Integer::isNegative() {
    return value < 0;
}

bool Integer::isProstoe() {
    if (value < 2) return false;
    for (int i = 2; i <= value / 2; i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

int Integer::nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Integer::nod2(Integer other) {
    return nod(value, other.value);
}

int Integer::nok(Integer other) {
    return (value / nod(value, other.value)) * other.value;
}

bool Integer::isCoprime(Integer other) {
    return nod(value, other.value) == 1;
}

Integer Integer::operator+(const Integer other) const {
    return Integer(value + other.value);
}

Integer Integer::operator-(const Integer other) const {
    return Integer(value - other.value);
}


Integer Integer::operator*(const Integer other) const {
    return Integer(value * other.value);
}

Integer Integer::operator/(const Integer other) const {
    if (other.value == 0) {
        throw std::invalid_argument("Деление на ноль!");
    }
    return Integer(value / other.value);
}

Integer& Integer::operator+=(const Integer& other) {
    this->value += other.value;
    return *this;
}

Integer& Integer::operator-=(const Integer& other) {
    this->value -= other.value;
    return *this;
}

Integer& Integer::operator*=(const Integer& other) {
    this->value *= other.value;
    return *this;
}

Integer& Integer::operator/=(const Integer& other) {
    if (other.value == 0) {
        throw std::invalid_argument("На нол незббя!");
    }
    this->value /= other.value;
    return *this;
}

Integer& Integer::operator--(void) {
    value--;
    return *this;
}

Integer Integer::operator--(int) {
    Integer temp = *this;
    value--;
    return temp;
}

Integer& Integer::operator++(void) {
    value++;
    return *this;
}

Integer Integer::operator++(int) {
    Integer temp = *this;
    value++;
    return temp;
}

bool Integer::operator==(const Integer& other) const {
    return value == other.value;
}

bool Integer::operator!=(const Integer& other) const {
    return value != other.value;
}

bool Integer::operator>(const Integer& other) const {
    return value > other.value;
}

bool Integer::operator<(const Integer& other) const {
    return value < other.value;
}

bool Integer::operator>=(const Integer& other) const {
    return value >= other.value;
}

bool Integer::operator<=(const Integer& other) const {
    return value <= other.value;
}

Integer Integer::operator+() const {
    return Integer(value);
}

Integer Integer::operator-() const {
    return Integer(-value);
}

int Integer::getValue() const {
    return value;
}

