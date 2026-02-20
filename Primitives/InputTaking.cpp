#include <iostream>
#include <string>

//instead of using "using namespace std;" 

int main()
{
    int IntegerInput;
    float FloatInput;
    double DoubleInput;
    char CharecterInput;
    bool BooleanInput;
    std::string StringInput;

    //integer
    std::cout << "Enter an Integer: " << std::endl;
    std::cin >> IntegerInput;
    std::cout << "Integer: " << IntegerInput << "\n" << std::endl; 

    //float
    std::cout << "Enter a Float: " << std::endl;
    std::cin >> FloatInput;
    std::cout << "Float: " << FloatInput << "\n" << std::endl; 

    //double
    std::cout << "Enter a Double: " << std::endl;
    std::cin >> DoubleInput;
    std::cout << "Double: " << DoubleInput << "\n" << std::endl; 

    //charecter
    std::cout << "Enter a Charecter: " << std::endl;
    std::cin >> CharecterInput;
    std::cout << "Charecter: " << CharecterInput << "\n" << std::endl; 

    //boolean
    std::cout << "Enter an Boolean: " << std::endl;
    std::cin >> BooleanInput;
    // clear buffer before getline
    std::cin.ignore();
    std::cout << "Boolean: " << BooleanInput << "\n" << std::endl; 

    //string
    std::cout << "Enter an String: " << std::endl;
    std::getline(std::cin, StringInput);
    std::cout << "String: " << StringInput << "\n" << std::endl; 

    return 0;
}