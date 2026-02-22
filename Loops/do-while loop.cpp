#include <iostream>

using namespace std;

int main()
{
    /*
    
    #Structure: 
    do
    {
       //code body ---> in this type of loop, this particular block runs for once, even when the condition is false.
       increment/decrement;
    }
    while(condition);

    ? What a Loop does: It repeats a block of code multiple times until a condition becomes false.
    #Mostly known as "Entry Control Loop"

    */

    int cups;

    cout << "How many cups of coffee: ";
    cin >> cups;

    int i = 1; //initialized
    do
    {
        cout << "Brewing " << i << " cup of coffee" << endl; //it will execute once even if the condition is false
        i++; //increment
    }
    while(i<=cups); //condition

    return 0;
}