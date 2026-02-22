#include <iostream>

using namespace std;

int main()
{
    /*
    
    if - else if - else: While working with multiple conditions to make a descision we use "else if" to process other
    conditions after the "if".

    #structure:

    if(condtion_1)
    {
       //code body
    }
    else if(condition_2)
    {
       //code body
    }

    ...
    
    else if(condition_n)
    {
       //code body
    }
    else
    {
       //code body
    }

    */

    int Year;
    
    cout << "Enter an year: ";
    cin >> Year;

    if(Year%4 == 0 && Year%100 != 0)
    {
        cout << Year << " is a leap year." << endl; 
    }
    else if(Year%400 == 0)
    {
        cout << Year << " is a leap year." << endl;
    }
    else
    {
        cout << Year << " is not a leap year." << endl;
    }

    /*
    
    4 - Yes && 100 - No
    400 - Yes
    
    */

    return 0;

}