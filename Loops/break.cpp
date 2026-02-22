#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    
    break: where the command is applied it exits from that spacific block, which is executing.
    And immediately stops the execution of the block.
    
    */
  
    string cups;

    while(true)
    {
        cout << "Do you want a cup of coffee | Yes/No: ";
        getline(cin , cups);

        if(cups == "Yes")
        {
            cout << "Brewing a cup of coffee;" << endl;
        }
        else if(cups == "No")
        {
            cout << "No more coffee will be brewed" << endl;
            break; //it stops the loop and exit from the whole "while" loop block.
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}