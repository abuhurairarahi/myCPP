#include <iostream>
#include <cstdlib>
#define N 5

using namespace std;

//call by reference

//point function declaration
int* ptrFunc(int* parameterAddress)
{
    int* funcAddress;

    //Address recieved
    funcAddress = parameterAddress;

    //task execute
    *funcAddress += 10;

    //returning the address
    return funcAddress;
}

//preferred example of call by ref:[bellow]

//pointer function if the returntype is "void"
void prtFunc(int* parameterAddress)
{
    int* funcAddress;

    //Address recieved
    funcAddress = parameterAddress;

    //task execute
    *funcAddress += 10;
}


int main()
{
    //type-01
    int* ptrOne;   //individually "Address"

    //type-02
    int *ptrTwo;   //individually "Address"

    //declare integer variable
    int intVariable = 10;

    //accessing the address of "intVariable" using " & "
    ptrOne = &intVariable;
    cout << "Address of intVariable (using ptrOne): " << ptrOne << endl;
    cout << "Address of intVariable (using intVariable): " << (&intVariable) << endl;

    //" & " is only applicable for random variable. E.g. int, float, double, char, bool. #Attention: Not applicable for any pointer variable.

    cout << "Value stored in ptrOne: " << *ptrOne << endl;

    ptrTwo = ptrFunc(&intVariable); //Calling the function using reference

    //printing the value
    cout << "\nAfter the Call by reference" << endl;
    cout << "Value of intVariable: " << intVariable << endl;
    cout << "Value of ptrTwo: " << *ptrTwo << endl;

    //prointer function calling which returns nothing
    ptrFunc(&intVariable);

    cout << "\nAfter the Call by reference without returntype" << endl;
    cout << "Value of intVariable: " << intVariable << endl;
    //the value stored in ptrTwo will also change as ptrTwo & intVariable belong from the same address.

    return 0;

}