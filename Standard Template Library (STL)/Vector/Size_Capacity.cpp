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

    return 0;
}