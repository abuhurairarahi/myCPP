#include <iostream>

using namespace std;

int main()
{
    /*
    
    #Structure: 
    initialization;
    while(condition)
    {
       //code body
       increment/decrement;
    }

    ? What a Loop does: It repeats a block of code multiple times until a condition becomes false.
    #Mostly known as "Exit Control Loop"

    */

    int cups;

    cout << "How many cups of coffee: ";
    cin >> cups;

    int i=1; //initialized

    while(i<=cups)
    //the loop stops when the "i<=cups" condition get false.
    {
        cout << "Brewing " << i << " cup of coffee" << endl;
        //here the line will repeat untill the "i<=cups" condition false;
        
        i++;
        //here it increments;
    }

    return 0;
}