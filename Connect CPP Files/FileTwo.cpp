#include <iostream>
#include "FileOne.cpp"
//#include "/workspaces/mycpp/Function/Call by Value.cpp"
//accessing different files from different folder

using namespace std;

int main()
{
    printFileName(); 
    //by including fileOne.cpp we can use their elements

    cout << "This is FileTwo" << endl;

    //callbyValue(30);
}