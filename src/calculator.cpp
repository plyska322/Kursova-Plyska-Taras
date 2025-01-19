#include "calculator.h"

double Calculator::Add (double a, double b)
{
    return a + b;
}

double Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

double Calculator::Mul (double a, double b)
{
    return a * b;
}
void Calculator::PrintResult(double a, double b)
{
    double result = Mul(a, b);
    std::cout << "Answer: " << a << " * " << b << " = " << result << std::endl;
}