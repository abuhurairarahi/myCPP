#include <iostream>

using namespace std;

//call by value
void callbyValue (int Variable)
{
    Variable += 10;
    cout << "Variable --> value inside the function: " << Variable << endl;
}

int main()
{
    int Variable = 10;
    callbyValue(Variable);

    /*

    #Call by Value: when you pass a variable to a function,the function receives a copy
    of that variable — not the original. So, any changes made inside the function do NOT affect
    the original variable.
    
    */
    

    cout << "Variable --> value in the main() function: " << Variable << endl;

    return 0;
}

