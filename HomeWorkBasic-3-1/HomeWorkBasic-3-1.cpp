#include <iostream>

class Calculator 
{
private:
    double num1{}, num2{};
public:
    bool setNum1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }
    bool setNum2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;
            return true;
        }
    }
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    double number1{}, number2{};
    while (true) {
        while (true) {
            std::cout << "Введите первое число: ";
            std::cin >> number1;
            if (calc.setNum1(number1)) {
                break;
            }
            else {
                std::cout << "Неверный ввод!\n";
            }
        }    
        while(true) {
            std::cout << "Введите второе число: ";
            std::cin >> number2;
            if (calc.setNum2(number2)) {
                break;
            }
            else {
                std::cout << "Неверный ввод!\n";
            }
        }
        std::cout << number1 << " + " << number2 << " = " << calc.add() << "\n";
        std::cout << number1 << " - " << number2 << " = " << calc.subtract_1_2() << "\n";
        std::cout << number2 << " - " << number1 << " = " << calc.subtract_2_1() << "\n";
        std::cout << number1 << " * " << number2 << " = " << calc.multiply() << "\n";
        std::cout << number1 << " / " << number2 << " = " << calc.divide_1_2() << "\n";
        std::cout << number2 << " / " << number1 << " = " << calc.divide_2_1() << "\n";       
    }
}

