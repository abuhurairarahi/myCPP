#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //declare a vector
    vector<int> vectorOne(10,1);

    /*

         0   1   2   3   4   5   6   7
        --- --- --- --- --- --- --- ---
       | 1 | 2 | 3 | 4 |   |   |   |   |
        --- --- --- --- --- --- --- ---
       <----- size ---->                                size: 4
       <----------- capacity ---------->                capacity: 8


       #Size: means how many elements are currently stored in the vector. fucn: vectorName.size()

       #Capacity: means the maximum number of elements that can be stored
       in a vector without taking up new memory. fucn: vectorName.capacity()

    */

    cout << "size: " << vectorOne.size() << endl;   //size: 5
    cout << "capacity: " << vectorOne.capacity() << endl;   //capacity: 5
    
    //pop element from back
    vectorOne.pop_back();

    //after pop_back()
    cout << "size: " << vectorOne.size() << endl;   //size: 4
    cout << "capacity: " << vectorOne.capacity() << endl;   //capacity: 5


    //resizing a vector
    vectorOne.resize(5);

    /* --> it resizes the vector with new size by storing the previous existed data
    and rest of the empty index will fill up with "NULL" value. */

    cout << "size: " << vectorOne.size() << endl;
    cout << "capacity: " << vectorOne.capacity() << endl;

    /*
    
    #Attention for CAPACITY:

    while resizing, if the "new_size" is less than "previous_capacity" the capacity will remain
    unchanged. 
    
    E.g. : previous_size: 9 && previous_capacity: 10, 
    resize(5) --> new_size: 5 && new_capacity: 10

    #Remember: size will always change but the capacity will only change when the new_size
    is greater than the previous_capacity.
    
    */


    vector<char> charVector;

    //pre-allocating space for charVector as form of "capacity"
    charVector.reserve(10);

    cout << "capacity: " << charVector.capacity() << endl;   //capacity: 10
    cout << "size: " << charVector.size();  //size: 0

    return 0;
}