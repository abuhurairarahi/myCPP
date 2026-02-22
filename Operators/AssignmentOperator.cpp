#include <iostream>

using namespace std;

int main()
{
    //Assignment Operator: ( += , -= , /= , *= , %= )

    int number_one = 10;

    //plusEqual (+=)
    number_one += 40;
    //Interpretation: 10+40=50; number_one=50

    cout << "PlusEqual: " << number_one << endl;


    //minusEqual (-=)
    number_one -= 10;
    //Interpretation: 50-10=40; number_one=40

    cout << "MinusEqual: " << number_one << endl;


    //divideEqual (/=)
    number_one /= 2;
    //Interpretation: 40/2=20; number_one=20

    cout << "DivideEqual: " << number_one << endl;


    //modEqual (%=)
    number_one %= 8;
    //Interpretation: 20%8=4; number_one=4

    cout << "ModEqual: " << number_one << endl;

    return 0;
}