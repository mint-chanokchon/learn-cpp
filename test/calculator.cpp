#include <iostream>

int main()
{
    char op;
    double num1, num2, result;

    std::cout << "****** CALCULATOR ******" << std::endl;
    
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >>  num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "That wasn't a valid response";
            return 0;
    }

    std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;

    return 0;
}