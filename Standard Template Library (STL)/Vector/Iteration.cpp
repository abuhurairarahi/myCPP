#include <bits/stdc++.h>

using namespace std;

int main()
{
    //declared vector with capacity
    vector<string>vectorOne(10);


    //type: Index-approch
    int index = 0;
    while(index < vectorOne.size())
    {
        cout << "Enter element for index " << index << " : ";
        cin >> vectorOne[index];
    }
    
    return 0;
}