#include <iostream>
#include "FileOne.cpp" 
//while accessing a cpp file located in the same folder, then just include the filename only.

//#include "/workspaces/mycpp/Function/Call by Value.cpp"
//accessing different files from different folder, include the file path.

using namespace std;

int main()
{
    /*
    
    #ATTENTION: File which will be attached make sure they don't have any main() function.
    
    */
    printFileName(); 
    //by including fileOne.cpp we can use their elements

    cout << "This is FileTwo" << endl;

    //callbyValue(30);

    return 0;
}