#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    
    Continue: While executing multiple data/commands together if you want to skip any data/command, use "continue" command. 
    
    #Attention: (Addition elements we will use)

    #List or Array: A data structure that stores multiple values of the same data type in a single variable,
    using continuous memory locations. We can trace the data using memory address or indexing. Array indexing starts
    from 0 and runs n time. **The time complexity of an array ---> O(n)** 

    */

    //initializing an array & arraysize
    int arraySize = 5;
    string subjectName[arraySize];

    //Accessing individual array index using loop
    int index = 0;
    while(index < arraySize)
    {
        cout << "Enter the subject name: ";
        getline(cin, subjectName[index]);

        //incrementing the index
        index++;
    }

    cout << "\n";

    //Task: We will skip the subject "SOC" if it's availabe in the array using "continue" command;

    //Remember: To access/change/input the array data using index, have to use loop.

    for(index = 0; index < arraySize ; index++)
    {
        if(subjectName[index] == "SOC")
        {
            continue;
        }
        else
        {
            cout << subjectName[index] << " subject is in the syllabus." << endl;
        }
    }

    return 0;
}