#include <iostream>

using namespace std;

int main()
{
    int Marks = 92;
    const int Uid = 204;
    //"const" identifies the constant; which is fixed & non-changable.

    //Uid = 212; Can't be changed the value id "Uid".

    cout << "Student UID: " << Uid << " has obtained " << Marks << " marks in the exam." << endl;
    cout << "Congratulations!\n" << endl;
    return 0;
}