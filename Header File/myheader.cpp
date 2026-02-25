#include <iostream>

using namespace std;

int sum (int valueOne, int valueTwo)
{
    return valueOne + valueTwo;
}

int sub (int valueOne, int valueTwo)
{
    return valueTwo - valueOne;
}

void printResult (int valueOne, int valueTwo)
{
    int sumResult = sum (valueOne, valueTwo);

    int subResult = sub (valueOne, valueTwo);

    cout << "Sum: " << sumResult << "\n" << "Sub: " << subResult << endl; 
}