#include <bits/stdc++.h>

using namespace std;

int main()
{
    //declared vector with capacity
    vector<string>vectorOne(4);


    //type: Index-approch (applicable for input & output)
    int index = 0;
    while(index < vectorOne.size())
    {
        cout << "Enter element for index " << index << " : ";
        getline(cin, vectorOne[index]);
        index++;
    }


    //type: modern approach using for-each loop (applicable for output only)
    for(string output : vectorOne)
    {
        cout << output << " ";
    }


    //type: Iterator approach (applicable for input & output) 
    auto iterate = vectorOne.begin();
    while(iterate < vectorOne.end())  //the last elements is placed on --> (vectorOne.end() - 1)
    {
        cout << *(iterate) << " ";
        iterate += 1;
    }

    return 0;
}