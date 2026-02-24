#include <iostream>

using namespace std;

void callbyReference(int* Parameter) //function receives the address passing as argument
{
    *Parameter += 10;

    // here the Parameter and Argument belong from the same memory address [Parameter == Argument] 
    // here if we done any changes with Parameter the same change will happen with ArgumentVariable.
}

int main()
{
    int varValue = 10;

    cout << "Printing the varValue before passing the Reference: " << varValue << endl;

    /*
    
    #Call by Reference: means when you pass a variable to a function, the function receives
    the original variable itself — not a copy. So, any changes made inside the function DO 
    affect the original variable.

    */

    callbyReference(&varValue); // here we pass the memory address.

    cout << "Printing the varValue after passing the Reference: " << varValue << endl;

    return 0;

}