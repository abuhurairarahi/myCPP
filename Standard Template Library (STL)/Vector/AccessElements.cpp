#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //declaring a vector
    vector<int>vectorOne = {10, 20, 30, 40, 50};

    //accessing the 0th-index or first-element: front()
    int frontElement = vectorOne.front();
    cout << "Front Element: " << frontElement << endl;


    //accessing the nth index or last-element: back()
    int backElement = vectorOne.back();
    cout << "Back Element: " << backElement << endl;


    //accessing any indexed-element: at(index)
    //usually programmers not use it..
    int randomIndex_element = vectorOne.at(3);
    cout << "3rd Index Element: " << randomIndex_element << endl;


    //accessing any indexed-element: vectorName[index]
    //it's similar to array
    randomIndex_element = vectorOne[1];
    cout << "1st Index Element: " << randomIndex_element << endl;

    
    return 0;
}