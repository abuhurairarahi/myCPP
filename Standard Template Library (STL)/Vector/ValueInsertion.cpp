#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //declaring a vector
    vector<int> vectorOne; //size=0

    //type-01 
    //push_back() : it simply works to add an element from the back.
    vectorOne.push_back(10);
    vectorOne.push_back(20);
    vectorOne.push_back(30);
    vectorOne.push_back(40);
    vectorOne.push_back(50);

    //output: 10 20 30 40 50

    //output using for each loop
    for(int value : vectorOne)
    {
        cout << value << " ";
    }
    cout << endl;


    //type-02
    //insert(iterator, elementValue) : can insert element at any index

    /*

    vectorName.begin()  -->  it holds the address of the first-index element of vector >> 0th index
    vectorName.end()    -->  it holds the address of the last-index element of vector >> nth index
    
    */

    vectorOne.insert(vectorOne.begin() + 3, 100);  // 0th index + 3 = 3rd index

    //output: 10 20 30 100 40 50

    //output using for each loop
    for(int value : vectorOne)
    {
        cout << value << " ";
    }

    return 0;
}