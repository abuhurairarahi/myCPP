#include <iostream>
#include <string> //for string

/*
using namespace std;

int main()
{
    string Name = "Unknown";
    int UID = 100;
    float CGPA = 3.90;
    //double: is 8 bit. It's good practice to use double instead of int & float; can be castes into int & float
    
    cout << Name << " - " << UID << " - " << CGPA << endl;
    return 0;  
}
*/

//using 'namespace' is a good practice; it turns like:

int main()
{
    std::string Name = "Unknown";
    //std::string: string a part of standard namespace; 
    int UID = 100;
    float CGPA = 3.90;
    //int, float, double: not required std:: before declear;
    
    std::cout << Name << " - " << UID << " - " << CGPA << std::endl;
    return 0;
}