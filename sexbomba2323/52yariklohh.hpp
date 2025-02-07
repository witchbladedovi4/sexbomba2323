#ifndef _52YARIKLOHH_HPP_
#define _52YARIKLOHH_HPP_
class Integer {
private:
    int value;

public:
    Integer(int val);

    bool isEven();
    bool isOdd();
    bool isPositive();
    bool isNegative();
    bool isProstoe();
    int nod(int a, int b);
    int nod2(Integer other);
    int nok(Integer other);
    bool isCoprime(Integer other);
    Integer operator+(const Integer other) const;
    Integer operator-(const Integer other) const;
    Integer operator*(const Integer other) const;
    Integer operator/(const Integer other) const;
    Integer& operator+=(const Integer& other);
    Integer& operator-=(const Integer& other);
    Integer& operator*=(const Integer& other);
    Integer& operator/=(const Integer& other);
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
#endif // !_52YARIKLOHH_HPP_
