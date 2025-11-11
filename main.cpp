#include <iostream>
#include <stdexcept>
using namespace std;
--
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0)
            throw invalid_argument("Помилка: ділення на нуль!");
        return a / b;
    }
};

cout<< помилка;
cout<< пул реквест;
