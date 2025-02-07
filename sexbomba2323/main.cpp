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
        std::cout << "\nЧисло " << num.getValue() << " чётное\n";
    }

    if (num.isOdd()) {
        std::cout << "Число " << num.getValue() << " нечётное\n";
    }

    if (num.isPositive()) {
        std::cout << "Число " << num.getValue() << " положительное\n";
    }

    if (num.isNegative()) {
        std::cout << "Число " << num.getValue() << " отрицательное\n";
    }

    if (num.isProstoe()) {
        std::cout << "Число " << num.getValue() << " простое\n";
    }
    else {
        std::cout << "Число " << num.getValue() << " не простое\n";
    }

    if (num.isCoprime(num2)) {
        std::cout << "Числа " << num.getValue() << " и " << num2.getValue() << " являются взаимопростыми\n";
    }
    else {
        std::cout << "Числа " << num.getValue() << " и " << num2.getValue() << " не являются взаимопростыми\n";
    }

    std::cout << "\n\n";
    std::cout << "НОД = " << num.nod2(num2) << "\n";
    std::cout << "НОК = " << num.nok(num2) << "\n";
    std::cout << "\n\n";

    Integer c1 = num + num2;
    Integer c2 = num - num2;
    Integer c3 = num * num2;
    Integer c4 = num / num2;




    Integer c9 = ++num;
    Integer c10 = num++;
    std::cout << "Сложение: " << c1.getValue() << '\n';
    std::cout << "Вычитание: " << c2.getValue() << '\n';
    std::cout << "Умножение: " << c3.getValue() << '\n';
    std::cout << "Деление: " << c4.getValue() << '\n';
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

    std::cout << "num3 (унарный плюс num1): " << c5.getValue() << '\n';
    std::cout << "num4 (унарный минус num2): " << c6.getValue() << '\n';

    return 0;
}
