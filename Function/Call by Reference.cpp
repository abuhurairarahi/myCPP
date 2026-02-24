#include <iostream>

using namespace std;

void callbyReference(int* Address)
{
    *Address += 10;
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

    callbyReference(&varValue);

    cout << "Printing the varValue after passing the Reference: " << varValue << endl;

    return 0;

}