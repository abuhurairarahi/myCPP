#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>

using namespace std;

int main()
{
    /*
    
    Nested if-else: It's a hybrid conditional statement;
    there's no fixed structre;
    it include if-else, if-else if-else, nested if.
    
    */

    //E.g. build a basic calculator

    double variableOne, variableTwo;
    string sign;

    cout << "Enter two numbers: ";
    cin >> variableOne;
    cin >> variableTwo;

    cin.ignore();
    cout << "Choose the operation: \n1. + \n2. - \n3. * \n4. / \n5. % " << endl;
    getline(cin, sign);

    if(sign == "+")
    {
        double sum = variableOne + variableOne;

        cout << "Choose any: \n1. In Round \n2. In Decimal" << endl;
        int choice;
        cin >> choice;

        if(choice == 1)
        {
            cout << "Ans: " << round(sum) << endl;
        }
        else
        {
            cout << "Ans: " << sum << endl;
        }
    }
    else if(sign == "-")
    {
        double sub = variableOne - variableTwo;

        cout << "Choose any: \n1. In Round \n2. In Decimal" << endl;
        int choice;
        cin >> choice;

        if(choice == 1)
        {
            cout << "Ans: " << round(sub) << endl;
        }
        else
        {
            cout << "Ans: " << sub << endl;
        }
    }
    else if(sign == "*")
    {
        double mul = variableOne * variableTwo;

        cout << "Choose any: \n1. In Round \n2. In Decimal" << endl;
        int choice;
        cin >> choice;

        if(choice == 1)
        {
            cout << "Ans: " << round(mul) << endl;
        }
        else
        {
            cout << "Ans: " << mul << endl;
        }
    }
    else if(sign == "/")
    {
        double div = variableOne / variableTwo;

        cout << "Choose any: \n1. In Round \n2. In Decimal" << endl;
        int choice;
        cin >> choice;

        if(choice == 1)
        {
            cout << "Ans: " << round(div) << endl;
        }
        else
        {
            cout << "Ans: " << div << endl;
        }
    }
    else if(sign == "%")
    {
        if(typeid(variableOne) == typeid(double) || typeid(variableTwo) == typeid(double))
        {
            cout << "Can operate mod operation with float value" << endl;

            cout << "want to continue with type casting: Yes/No" << endl;
            string choiceAgain;
            getline(cin, choiceAgain);

            if(choiceAgain == "Yes")
            {
                int mod = int(variableOne) % int(variableTwo);
                cout << "Ans: " << mod << endl;
            }
        }
        else
        {
            return 0; 
        }
    }
    else
    {
        cout << "Ivalid Input" << endl;
    }
    

}