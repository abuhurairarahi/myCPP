#include <iostream>

using namespace std;

int main()
{
    /*
    
    Continuous if: While a program needs to check every single conditions, then we've to use "continuous if", lastly to exit
    the conditional block have to use an "else" statement. Also known as "Nested if".
    
    #Structure:

    if(condition)
    {
       if(condition)
       {
           //code body       
       }
       if(condition)
       {
           //code body       
       }

       ...

       else
       {
           //code body
       }
    }
    else
    {
       //code body
    }

    */

    int number = 10;

    if(number == 10)
    {
        cout << "Equals to 10" << endl;

        if(number < 20)
        {
            cout << "Smaller than 20" << endl;
            number += 20;
        }
        if(number > 20)
        {
            cout << "greater than 20" << endl;
            number -=10;
        }
        if(number == 20)
        {
            cout << "Continuous if stops here" << endl;
        }  
    }
    else
    {
        return 0;
    }

    //here the code checks every single "if" conditions.

}