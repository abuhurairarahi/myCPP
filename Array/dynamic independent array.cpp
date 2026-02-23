#include <iostream>
#include <cstdlib>

using namespace std;

int N = 1;

int main()
{
    int* dynamicArray;
    dynamicArray = (int*)malloc(N*sizeof(int));
    
    int choice;
    int i = 0;
    while(true)
    {
        cout << "Do you want to input element to array: \n1.Yes \n2.No \n3.Print the array element\n\nEnter Choice: ";
        cin >> choice;
        if(choice == 1)
        {
            if(i == 0){
                cout << "Enter for index " << i << " : "; 
                cin >> *(dynamicArray + i);
                i++;
                cout << "\n";
            }
            else{
                N+=1;
                dynamicArray = (int*)realloc(dynamicArray, N*sizeof(int));
                cout << "Enter for index " << i << " : "; 
                cin >> *(dynamicArray + i);
                i++;
                cout << "\n";
            }
            
        }
        else if(choice == 2)
        {
            break;
        }
        else if(choice == 3)
        {
            cout << "The Final Array: ";
            for(int index = 0; index <i; index++){
                cout << *(dynamicArray + index) << " ";
            }
            cout << "\n";
            return 0;
        }
        else{
            cout << "Invalid Input";
            return 0;
        }
    }

    cout << "You exit the array" << endl;
}