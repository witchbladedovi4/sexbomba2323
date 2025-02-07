//#pragma once

#ifndef _INTEGER_HPP_
#define _INTEGER_HPP_
class Integer {
private:
    bool sign_;
    unsigned units_;

public:
    //Конструктор
    Integer();
    Integer(bool sign, unsigned units);
    Integer(int value);
    
    // Сеттеро
    void SetSign(bool sign);
    void SetUnits(unsigned units);


    // Геттеро
    bool GetSign() const;
    unsigned GetUnits() const;


    bool isEven() const;
    bool isOdd() const;
    bool isPositive() const;
    bool isNegative() const;
    bool isSimple() const;
    int nod(int a, int b) const;
    int nod2(Integer other) const;
    int nok(Integer other) const;
    bool isCoprime(Integer other) const;
    Integer& operator+(const Integer other) const;
    Integer& operator-(const Integer other) const;
    Integer& operator*(const Integer other) const;
    Integer& operator/(const Integer other) const;
    Integer& operator+=(const Integer& other) const;
    Integer& operator-=(const Integer& other) const;
    Integer& operator*=(const Integer& other) const;
    Integer& operator/=(const Integer& other) const;
    Integer& operator--(void);
    Integer operator--(int);
    Integer& operator++(void);
    Integer operator++(int);
    bool operator==(const Integer& other) const;
    bool operator!=(const Integer& other) const;
    bool operator>(const Integer& other) const;
    bool operator<(const Integer& other) const;
    bool operator>=(const Integer& other) const;
    bool operator<=(const Integer& other) const;
    Integer operator+() const;
    Integer operator-() const;
    int getValue() const;

};
#endif // !_INTEGER_HPP_
