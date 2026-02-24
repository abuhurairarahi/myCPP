#include <iostream>

using namespace std;

int main()
{
    /*
    
    #List or Array: A data structure that stores multiple values of the same data type in a single variable,
    using continuous memory locations. We can trace the data using memory address or indexing. Array indexing starts
    from 0 and runs n time. **The time complexity of an array ---> O(n)** 

    */

    // -- Array Initialization (Type-01) --
    //before using an array it must be initialized with size.

    int integerArrayOne[5];


    // -- Array Initialization (Type-02) --

    int integerArrayTwo[] = {10, 20, 30, 40};


    //Accessing individual array index

    cout << integerArrayTwo[1] << endl;    //"integerArrayTwo[1]" means the element of the 1st index



    // -- Array input (Type-01) --

    //We can individually give input in the array: "index by index"

    integerArrayOne[0] = 10;  //index: 0
    integerArrayOne[1] = 20;  //index: 1
    integerArrayOne[2] = 30;  //index: 2
    integerArrayOne[3] = 40;  //index: 3
    integerArrayOne[4] = 50;  //index: 4

    //integerArrayOne[5] = 10;  ERROR: array out of bound.
    //Array runs from index: 0 to index: (n-1); 



    // -- Array input (Type-02) --

    //using a loop we can directly input the array

    cout << "integerArrayOne" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter input for index " << i << " : ";
        cin >> integerArrayOne[i];

        cout << "Index " << i << " element : ";
        cout << integerArrayOne[i] << endl;
        cout << "\n";

        //array runs index 0 to n-1; as soon as the loop flows, we can input the array sequentially. 
    }
    cout << "\n";



    // -- Printing outputs --

    //like we take array input usign loop; if we just simply replace the "input" comand with the "output"
    //can print the all array elements sequentially. 

    int i = 0;
    int ArrayLenght = sizeof(integerArrayTwo)/sizeof(integerArrayTwo[0]);

    cout << "integerArrayTwo" << endl;

    while(i < ArrayLenght)
    {
        cout << "Index " << i << " element : ";

        cout << integerArrayTwo[i] << endl;
        i++;
    }

    return 0;
}