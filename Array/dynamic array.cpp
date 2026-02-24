#include <iostream> 
#include <cstdlib>

//<cstdlib> includes the "malloc()", "realloc()" functions

using namespace std;

int N = 5;   //it's a global variable.

int main()
{
    /*
    
    Dynamic Array: 

          1. size is decided at runtime (during program execution).

          2. can be resized, using "realloc()"

          3. memory allocated in "heap"

          4. must be manually freed delete[] arrayName or free(arrayName)

    */

    int* dynamicArray;

    //As it needs memory allocation, there's must have the use of "pointer".


    //memory allocation for dynamic array using "malloc()"
    //structure: arrName = (type-casting)malloc(n * sizeof(data-type));

    dynamicArray = (int*)malloc(N * sizeof(int));


    //executing input & output

    for(int i = 0; i < N; i++)
    {
        //taking input
        cout << "Enter element for index " << i << " : ";

        cin >> *(dynamicArray + i);
    }


    //getting output
    cout << "\nEntire Array: ";

    for(int i = 0; i < N; i++)
    {
        cout << *(dynamicArray + i) << " ";
    }

    /*
    
    What is *(dynamicArray + i)?

    --> dynamicArray, itself a pointer variable. So, to access the value that
    stored in the address, have to put " * " before the VariableName. E.g. *(dynamicArray + i)

    As dynamicArray holds the memorysize equivalent to 5*integer(4 byte) = 20 byte

    dynamicArray, itself represents the first index of the Array. means "Array[0]"

    let, the address of dynamicArray = 1000, means the first index (dynamicArray + 0) = 1000
    
    
    #Attention: How the indexing works in DynamicArray

      index            |    addess
    --------------------------------

      dynamicArray + 0         1000
      dynamicArray + 1         1004  --> individual "i" repesents a single integer(4 byte)
      dynamicArray + 2         1008
      dynamicArray + 3         1012
      dynamicArray + 4         1016
 
    
    */



    //reallocation: resizing the array.
    //Structure: arrayName = (type-casting)realloc(nameArray, (PreviousSize + NewSize)*sizeof(data-type));
    cout << "\n\nReallocating..." << endl; 


    dynamicArray = (int*)realloc(dynamicArray, (N+2) * sizeof(int));


    //executing input & output

    //#Attention: this time, array runs "N to (N+2)-1"

    for(int i = N; i < N+2; i++)
    {
        //taking input
        cout << "Enter element for index " << i << " : ";

        cin >> *(dynamicArray + i);
    }

    //getting output
    cout << "\nEntire Array: ";

    for(int i = 0; i < N+2; i++)
    {
        cout << *(dynamicArray + i) << " ";
    }

    return 0;
}