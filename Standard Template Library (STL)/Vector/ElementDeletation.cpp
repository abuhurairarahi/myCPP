#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> parameterVector)
{
    for(int value : parameterVector)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vectorOne = {10,15,20,25,30};
    printVector(vectorOne);

    
    //type-01
    vectorOne.pop_back(); //capacity will no change
    //pop_back(): deletes the last element.
  
    printVector(vectorOne);
    cout << "Size: " << vectorOne.size() << endl;
    cout << "Capacity: " << vectorOne.capacity() << endl;


    //type-02
    vectorOne.erase(vectorOne.begin() + 1, vectorOne.begin() + 4); //capacity will no change
    //erase(initialIterator , destinationIterator): deletes a range of elements from initialIterator (included) to desinatonIterator (not included)
   
    /*

    index:     0   1   2   3   4
    elements:  10  20  30  40  50

    erase(1st-Iterator, 3rd-Iterator) --. it executes deletation from 1 to 2,
    index 3 will be not included. >> [initialIterator , destinationIterator)
    
    final Output: 10 40 50.
    
    */

    printVector(vectorOne);
    cout << "Size: " << vectorOne.size() << endl;
    cout << "Capacity: " << vectorOne.capacity() << endl;


    //type-03
    vectorOne.erase(vectorOne.begin() + 4); //capacity will no change
    //erase(Iterator): deletes the extact index's element.   

    /*
    
    vector: 10 20 30 40
    vector.erase(2th iterator) --> deletes the 2nd indexed element: 30 X

    final output: 10 20 40
    
    */

    printVector(vectorOne);
    cout << "Size: " << vectorOne.size() << endl;
    cout << "Capacity: " << vectorOne.capacity() << endl;

    
    //type-04
    vectorOne.clear(); //capacity will no change
    //clear(): it's deletes all the elements from the vector.

    printVector(vectorOne);
    cout << "Size: " << vectorOne.size() << endl;
    cout << "Capacity: " << vectorOne.capacity() << endl;

    
    return 0;
}