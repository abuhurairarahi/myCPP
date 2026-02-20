#include <iostream>

//instead of using "using namespace std;" 

int main()
{
    int IntegerData = 100;

    //"int" size 4 bytes

    float FloatData = 3.92;

    //"float" size 4 bytes

    double DoubleData = 400.143;
    
    //"double" size 8 bytes (can convert into integer & float)

    char CharcterData = 'A';
    
    //"char" size 1 byte

    bool BooleanData = true; //fixed output; 1/0

    //"bool" writen with true/false; again 0 = false, 1 or "any positive int" = true; any char = true;

    std::cout << "Boolean Data: " << BooleanData << std::endl;
    
    //as we didn't use the command "using namespace std;" have to write all standard commands in this manner std::(required syntax)

    std::cout << "Integer Data: " << IntegerData << std::endl;
    std::cout << "Float Data: " << FloatData << std::endl;
    std::cout << "Double Data: " << DoubleData << std::endl;
    std::cout << "Charecter Data: " << CharcterData << "\n" << std::endl;

    return 0;
}