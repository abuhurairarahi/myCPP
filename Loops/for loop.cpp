#include <iostream>

using namespace std;

int main()
{
    /*
    
    #Structure: 
    for(intialization ; condition ; increment/decrement)
    {
        //code body;
    }

    ? What a Loop does: It repeats a block of code multiple times until a condition becomes false.
    #Mostly known as "Exit Control Loop"

    */

    int cups;

    cout << "How many cups of coffee: ";
    cin >> cups;

    for(int i=1; i<=cups; i++)
    //the loop stops when the "i<=cups" condition get false.
    {
        cout << "Brewing " << i << " cup of coffee" << endl;
        //here the line will repeat untill the "i<=cups" condition false;
    }

    return 0;
}