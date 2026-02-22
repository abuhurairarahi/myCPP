#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    
    Logical Operator:

    1. && : Logical AND 
    2. || : Logical OR

    */

    /*
    
    Condition:

    Suppose you're a student of ABC University, or purchase more than 2000 taka product from ABC Mart you
    can get straight 10% discount. 

    */

    string isStudent;
    double purchaseAmount;

    cout << "Are you a student of ABC University? (Yes/No): ";
    getline(cin, isStudent);
    
    cout << "Total purchase amount: ";
    cin >> purchaseAmount;

    if(isStudent == "Yes" || purchaseAmount >= 2000)
    {
        cout << "Happy Shopping" << endl;
        cout << "Congratulation! You got the ABC Mart membership." << endl;
        
        if(isStudent == "Yes" && purchaseAmount >= 2000)
        {
            cout << "You got 10% discount." << endl; 
        }
    }
    else
    {
        cout << "Happy Shopping" << endl;
    }

    return 0;
}