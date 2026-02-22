#include <iostream>

using namespace std;

int main()
{
    /*
    
    #Switch-Case: works for easier logics. It is generally faster for many conditions due to jump table optimization,
    whereas if-else is more flexible but can be slower due to linear.

    #Structure:

    switch(condition) ---> "if" statement
    {
    case 01: ---> "else if" statement
      //code body
      break;

    case 02: ---> "else if" statement
      //code body
      break;

    default: ---> works like "else" statement
      break;
    }

    */

    int choice;

    cout << "Choose any food from the menu: \n1. Polaw\n2. Kacchi\n3. Khichuri\n4. Nan-Kabab" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 01:
        cout << "You choose Polaw" << endl;
        break;

        case 02:
        cout << "You choose Kacchi" << endl;
        break;

        case 03:
        cout << "You choose Khichuri" << endl;
        break;

        case 04:
        cout << "You choose Nan-Kabab" << endl;
        break;

        default:
        cout << "Invalid Choice" << endl;
        break;
    }

    return 0;

}