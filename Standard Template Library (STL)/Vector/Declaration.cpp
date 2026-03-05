#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /* 
       base structure:
       vector<data_type> vectorName;    
    */


    //type-01
    //for manual input.
    vector<int> vectorOne;


    //type-02
    //like array we can directly initialized a vector with data.
    vector<int> vectorTwo = {1,2,3,4,5};

    //output: 1 2 3 4 5


    //type-03
    //it declares a vector size of 3, where the vector is pre-initialized with 10. Syntax: vector<data_type> vectorName(size, pre-initialized Value).
    vector<int> vectorThree(3,10);

    //output: 10 10 10
 
    
    //type-04
    //initialized a vector with another vector. #here: "vectorFour" is a copy of "vectorTwo"  
    vector<int> vectorFour(vectorTwo);

    //output: 1 2 3 4 5

    return 0;
}