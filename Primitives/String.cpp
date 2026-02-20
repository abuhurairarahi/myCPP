#include <iostream>
#include <string>

//instead of using "using namespace std;" 

int main()
{
    //as we didn't use the command "using namespace std;" have to write all standard commands in this manner std::(required syntax)

    std::string UserName = "Rastha";

    std::string UserCountry;

    std::cout << "Enter your country name: ";

    //input string to variable: using "getline(where from, where to)" 

    std::getline(std::cin, UserCountry);

    std::cout << UserName << " from " << UserCountry << "\n" << std::endl;

    return 0;
    
}
