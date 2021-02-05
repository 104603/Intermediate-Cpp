#include "calculator.h"
#include <iostream>

using namespace std;

int addition(int operand1, int operand2)
{
    return operand1+operand2;
}

int subtraction(int operand1, int operand2)
{
    return operand1-operand2;
}

int multiplication(int operand1, int operand2)
{
    return operand1*operand2;
}

double division(double operand1, double operand2)
{
    return operand1/operand2;
}

int main()
{
    cout << "Addition:\n" << addition(1, 2) << "\n";
    cout << addition(35, 12) << "\n";
    cout << addition(29, 28) << "\n";
    cout << "Subtraction:\n" << subtraction(1,2) << "\n";
    cout << subtraction(35, 12) << "\n";
    cout << subtraction(29, 28) << "\n";
    cout << "Multiplication:\n" << multiplication(1,2) << "\n";
    cout << multiplication(35, 12) << "\n";
    cout << multiplication(29, 28) << "\n";
    cout << "Division:\n" << division(1.0,2.0) << "\n";
    cout << division(35.0, 12.0) << "\n";
    cout << division(29.0, 28.0) << "\n";
}