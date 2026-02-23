#include <iostream>
#define n 5

using namespace std;

int main()
{

    /*
    
    Nested Loop: where multiple loops run at the same time. Based on the logic, loops
    can be independent, sometimes dependent. 
    
    */

    for(int indexA=1; indexA <=n; indexA++)
    {
        cout << "Printing LoopOne: " << indexA << " times." << endl;

        for(int indexB=1; indexB <=n; indexB++)
        {
            cout << "---> Printing LoopTwo: " << indexB << " times." << endl;
        }

        cout << "Inner loop ended here.\n\n";
    }

    cout << "Message: Two loops successfully executed.\n" << endl;

    //these loops are independent by condition.
    
    return 0;
}