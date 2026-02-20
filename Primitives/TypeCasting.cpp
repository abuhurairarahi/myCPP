#include <iostream>
#include <cmath>

//using <cmath> we can use round(), floor(), ceil() functions

//instead of using "using namespace std;" 

int main()
{
    //as we didn't use the command "using namespace std;" have to write all standard commands in this manner std::(required syntax)

    double CarPrice = 1234567.1234;

    int IntegerCasting = (int)CarPrice; 

    //By casting this way -> there will be chance of Data loosing 
    
    std::cout << "Casted in to integer: " << IntegerCasting << std::endl;
    
    float FloatCasting = (float)CarPrice;

    //By casting this way -> there will be chance of Data loosing cause float can't store more than 4 bytes

    std::cout << "Casted in to float: " << FloatCasting << std::endl;

    //Pefferd: not to cast the double data into float (float == double)


    //Using floor(), ceil(), round() function:

    std::cout << "\n--- Using floor(), ceil(), round() function ---\n" << std::endl;

    double SampleData_1 = 3.5;

    double SampleData_2 = 3.2;
    
    double SampleData_3 = -3.1;

    /*
    
    Attention: "floor() means the less than ___"

    if we "floor()" any float/double data it converts straight current integer. e.g: floor(3.5) = 3 
    for negative float/double value e.g. floor(-2.1) = -3; 

    #question: how floor(-2.1) = -3 
    solve: -3 is less than -2.1, and -2 is greater than -2.1 
    E.g. floor(-2.1) = -3.

    */

    int floorData_1 = std::floor(SampleData_1);

    int floorData_2 = std::floor(SampleData_2);

    int floorData_3 = std::floor(SampleData_3);

    std::cout << "Floor(3.5): " << floorData_1 << "\nFloor(3.2): " << floorData_2 << "\nFloor(-3.1): " << floorData_3 << "\n" << std::endl;

    /*
    
    Attention: "ceil() means the greater than ___"

    if we "ceil()" any float/double data it converts straight greater integer. e.g: ceil(3.5) = 4 
    for negative float/double value e.g. ceil(-2.1) = -2; 

    #question: how ceil(-2.1) = -2 
    solve: -2 is greater than -2.1, and -3 is less than -2.1 
    E.g. ceil(-2.1) = -2.

    */

    int ceilData_1 = std::ceil(SampleData_1);

    int ceilData_2 = std::ceil(SampleData_2);

    int ceilData_3 = std::ceil(SampleData_3);

    std::cout << "Ceil(3.5): " << ceilData_1 << "\nCeil(3.2): " << ceilData_2 << "\nCeil(-3.1): " << ceilData_3 << "\n" << std::endl;

    /*
    
    Attention: 

    if the float/double data is greater equal than .5 then "round()" turnd into CeilData
    if the data is less than .5 than "round()" turnd into floor()
    
    Easy Knowledge:
    #Negative: round(-3.1) = ceil(-3.1) = -3 ; round(-3.5) = floor(-3.5) = -4 
    #Positive: round(3.1) = floor(3.1) = 3 ; round(3.5) = ceil(3.5) = 4;

    */

    int roundData_1 = std::round(SampleData_1);

    int roundData_2 = std::round(SampleData_2);

    int roundData_3 = std::round(SampleData_3);

    std::cout << "Round(3.5): " << roundData_1 << "\nRound(3.2): " << roundData_2 << "\nRound(-3.1): " << roundData_3 << std::endl;

}