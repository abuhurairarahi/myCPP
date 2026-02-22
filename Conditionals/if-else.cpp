#include <iostream>

using namespace std;

int main()
{
    /*
    
    #Conditional Statements: While making a decision based on conditions, we use conditional statements. Mostly known as
    if-else. E.g. A number is even or odd?  

    */

    int number;

    cout << "Enter a number: ";
    cin >> number;

    // number % 2 == 0 then the number is even;

    if(number % 2 == 0)
    {
        cout << number << " is Even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }

    return 0;
}