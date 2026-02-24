#include <iostream>

using namespace std;

//type-01
void funcOne()
{
    //this fuction doesn't return anything.
    cout << "Function with no parameter no returntype" << endl;
}

//type-02
void funcTwo(int parameter)
{
    //this fuction doesn't return anything, but has a parameter
    int funcVariable = parameter;

    cout << "Function with no returntype; but parameterValue: " << funcVariable << endl;
}


//initilizing with prototype

//type-03
int funcThree();

//type-04
int funcFour(int parameter);

//type-05
int fucnFive(int parameterOne, int parameterTwo);


//Same function with and without parameter
int sameFunc(int prototype)
{
    int funcVariable = prototype;
    return funcVariable;
}

/*

int sameFunc(int prototype = 10)
{
    int funcVariable = prototype;
    return funcVariable;
}

#Attention: this function works like, it asks you for argument!
whenever you pass any argument it will work on that, but if there is
no value passing as argument, then it will work with it's default value
initialized in the parameter.   

*/

int sameFunc()
{
    return 100;
}


int main()
{
    /*

    Basic Structure of complete function:

    return_type function_name(parameter_list)
    {
        // body of function
    }
    
    #Attention:

    1. If do not declare the complete function before the "main()" function,
    there must need to initilize the function with "function prototype".

    function-Prototype --->   return_type function_name(parameter_list);

    2. If a fucntion completily decleared before the "main()" function, there is
    no need of prototype initialization.  [PREFERRED]

    */

    
    //function which don't have have return-type can call directly [following]

    //calling type-01 function
    funcOne();

    //calling type-02 function
    funcTwo(2);


    //function which have return-type, have-to call under a variable [following]

    //calling type-03 function
    int returnFuncThree = funcThree();
    cout << "Printing the funcTree return value " << returnFuncThree << endl;

    //calling type-04 function
    int returnFuncFour = funcFour(4);
    cout << "Printing the funcFour return value " << returnFuncFour << endl;

    //calling type-05 function
    int returnFuncFive = fucnFive(2, 3);
    cout << "Printing the funcFive return value " << returnFuncFive << endl;


    //Same function with and without parameter
    int returnWithParameter = sameFunc(10);
    int returnWithoutParameter = sameFunc();

    cout << "Return Value With Parameter: " << returnWithParameter << endl;
    cout << "Return Value Without Parameter: " << returnWithoutParameter << endl;
    //we can use same function naming with parameter & without parameter.

    return 0;
}

//completing the functions

//type-03
int funcThree()
{
    //this function have a return-type, but no parameter

    return 3;
}

//type-04
int funcFour(int parameter)
{
    //this function have both return-type & parameter

    int funcVariable = parameter;

    return funcVariable;
}

//type-05
int fucnFive(int parameterOne, int parameterTwo)
{
    //this function have return-type, but two parameters

    int funcSum = parameterOne + parameterTwo;

    return funcSum;
}

