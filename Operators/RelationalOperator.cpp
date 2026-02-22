#include <iostream>

using namespace std;

int main()
{
    /*
    
    Relational Operator: 
    
    < : Less Than
    > : Greater Than
    <=: Less Equal
    >=: Greater Equal
    ==: Equal to
    !=: Not Equal to 

    */

    int Age;
    
    //taking input
    cout << "Enter the citizen's age: ";
    cin >> Age;

    /*
    
    Conditions:
    
    1. If Age is "greater equal (>=)" 18; comment: Eligible for voting.

    2. If Age is "less than (<)" 18; comment: Not eligible for voting.
          
          2.1. If Age is 0 to 5; comment: Baby

          2.2. If Age is 6 to 10; comment: Kid

          2.3. If Age is 10 to 17; comment: Teenager
    
    3. If Age is equal to 18; comment: Can be registered as voter.

    4. Else Invalid Input.

    */

    if(Age >= 18)
    {
        cout << "comment: Eligible for voting." << endl;
    }
    else if(Age < 18)
    {
        cout << "comment: Not eligible for voting." << endl;
        
        if(Age >=1 && Age <= 5)
        //Additionally: && -> Logical And Operator, it's a logical operator
        {
            cout << "comment: Baby" << endl;
        }
        else if(Age >= 6 && Age <= 10)
        {
            cout << "comment: Kid" << endl;
        }
        else if(Age >= 11 && Age <= 17)
        {
            cout << "comment: Teenager" << endl;
        }
        else if(Age == 0)
        {
            cout << "comment: Too baby for voting." << endl;
        }
        else
        {
            cout << "comment: Invalid Input" << endl;
        }

    }
    else
    {
        cout << "comment: Invalid Input" << endl;
    }

    return 0;
}