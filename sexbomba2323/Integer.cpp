#include "Integer.hpp"
#include <stdexcept>

Integer::Integer() :Integer(false, 0u) {};
Integer::Integer(bool sign, unsigned units) :sign_(sign), units_(units) {};
Integer::Integer(int value) {};


void Integer::SetSign(bool sign){}
void Integer::SetUnits(unsigned units) {};

bool Integer::GetSign() const {};
unsigned Integer::GetUnits() const {};

//set
void Integer::SetSign(bool sign)
{
    this->sign_ = sign;
}

void Integer::SetUnits(unsigned units)
{
    this->units_ = units;
}

// get
bool Integer::GetSign() const
{
    return sign_;
}

unsigned Integer::GetUnits() const
{
    return units_;
}


bool Integer::Integer::isEven() const {
    return units_ % 2 == 0;
}

bool Integer::isOdd() const {
    return units_ % 2 != 0;
}

bool Integer::isPositive() const {
    return units_ > 0;
}

bool Integer::isNegative() const {
    return units_ < 0;
}

bool Integer::isSimple() const {
    if (units_ < 2) return false;
    for (int i = 2; i <= units_ / 2; i++) {
        if (units_ % i == 0)
            return false;
    }
    return true;
}

int Integer::nod(int a, int b) const {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Integer::nod2(Integer other) const {
    return nod(units_, other.units_);
}

int Integer::nok(Integer other) const {
    return (value / nod(value, other.value)) * other.value;
}

bool Integer::isCoprime(Integer other) const {
    return nod(value, other.value) == 1;
}

Integer& Integer::operator+(const Integer other) const {
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

Integer& Integer::operator+=(const Integer& other) const {
    this->value += other.value;
    return *this;
}

Integer& Integer::operator-=(const Integer& other) const {
    this->value -= other.value;
    return *this;
}

Integer& Integer::operator*=(const Integer& other) const {
    this->value *= other.value;
    return *this;
}

Integer& Integer::operator/=(const Integer& other) const {
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

