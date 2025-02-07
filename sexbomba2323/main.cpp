#include <iostream>  
#include <Windows.h> 
#include "52yariklohh.hpp"
#include "Rational.hpp"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Integer num(10);
    Integer num2(3);

    std::cout << "a = " << num.getValue() << "\nb = " << num2.getValue();

    if (num.isEven()) {
        std::cout << "\n����� " << num.getValue() << " ������\n";
    }

    if (num.isOdd()) {
        std::cout << "����� " << num.getValue() << " ��������\n";
    }

    if (num.isPositive()) {
        std::cout << "����� " << num.getValue() << " �������������\n";
    }

    if (num.isNegative()) {
        std::cout << "����� " << num.getValue() << " �������������\n";
    }

    if (num.isProstoe()) {
        std::cout << "����� " << num.getValue() << " �������\n";
    }
    else {
        std::cout << "����� " << num.getValue() << " �� �������\n";
    }

    if (num.isCoprime(num2)) {
        std::cout << "����� " << num.getValue() << " � " << num2.getValue() << " �������� ��������������\n";
    }
    else {
        std::cout << "����� " << num.getValue() << " � " << num2.getValue() << " �� �������� ��������������\n";
    }

    std::cout << "\n\n";
    std::cout << "��� = " << num.nod2(num2) << "\n";
    std::cout << "��� = " << num.nok(num2) << "\n";
    std::cout << "\n\n";

    Integer c1 = num + num2;
    Integer c2 = num - num2;
    Integer c3 = num * num2;
    Integer c4 = num / num2;




    Integer c9 = ++num;
    Integer c10 = num++;
    std::cout << "��������: " << c1.getValue() << '\n';
    std::cout << "���������: " << c2.getValue() << '\n';
    std::cout << "���������: " << c3.getValue() << '\n';
    std::cout << "�������: " << c4.getValue() << '\n';
    std::cout << "\n\n";

    num = 4, num2 = -12;
    num += num2;
    std::cout << "+=: " << num.getValue() << '\n';

    num = -4, num2 = -12;
    num -= num2;
    std::cout << "-=: " << num.getValue() << '\n';

    num *= num2;
    std::cout << "*=: " << num.getValue() << '\n';
    num /= num2;
    std::cout << "/=: " << num.getValue() << '\n';
    std::cout << "\n\n";



    std::cout << "a == b: " << (num == num2) << "\n";
    std::cout << "a != b: " << (num != num2) << "\n";
    std::cout << "a > b: " << (num > num2) << "\n";
    std::cout << "a < b: " << (num < num2) << "\n";
    std::cout << "a >= b: " << (num >= num2) << "\n";
    std::cout << "a <= b: " << (num <= num2) << "\n";

    std::cout << "a = " << num.getValue() << "\nb = " << num2.getValue();
    std::cout << "\n\n";
    num = 0;
    num++;
    ++num;
    std::cout << "a++ = " << num.getValue() << '\n';
    num = 0;
    num--;
    --num;
    std::cout << "a++ = " << num.getValue() << '\n';

    num = 10, num2 = -3;
    Integer c5 = +num;
    Integer c6 = -num2;

    std::cout << "num3 (������� ���� num1): " << c5.getValue() << '\n';
    std::cout << "num4 (������� ����� num2): " << c6.getValue() << '\n';

    return 0;
}
