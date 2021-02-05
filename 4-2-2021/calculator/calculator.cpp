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

int division(int operand1, int operand2)
{
    return operand1/operand2;
}

int main1()
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
    cout << "Division:\n" << division(1,2) << "\n";
    cout << division(35, 12) << "\n";
    cout << division(29, 28) << "\n";

    return 0;
}