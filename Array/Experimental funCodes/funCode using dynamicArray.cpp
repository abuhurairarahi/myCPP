#include <iostream>
#include <cstdlib>

using namespace std;

int N = 1;

int main()
{
    int* dynamicArray;
    dynamicArray = (int*)malloc(N*sizeof(int));
    
    int i = 0;
    int choice;
    while(true)
    {
        cout << "Actions: \n1. Insert\n2. Detete Last\n3. Print\n4. Delete an index\nEnter your choice: ";
        
        cin >> choice;
        
            if(choice == 1){
            
            if(i == 0)
            {
                cout << "Enter the element of index " << i << " : ";
                cin >> *(dynamicArray + i);
                i++;
            }
            else
            {
                N+=1;
                dynamicArray = (int*)realloc(dynamicArray, N*sizeof(int));
                cout << "Enter the element of index " << i << " : ";
                cin >> *(dynamicArray + i);
                i++;
            }
            }
            
            else if(choice == 2){
            
            i-=1;
            
            cout << "index " << i << " is deleted successfully!" << endl;
            
            }
            
            else if(choice == 3){
            
            int j = 0;
            while(j < i)
            {
                cout << *(dynamicArray + j) << " ";
                j++;
            }
            
            break;
                
            }
            
            else if(choice == 4)
            {
                cout << "Enter the index: ";
                int index;
                cin >> index;
                
                while(index < i)
                {
                    int temp = *(dynamicArray + index);
                    
                    *(dynamicArray + index) = *(dynamicArray + (index+1));
                    *(dynamicArray + (index+1)) = temp;
                    
                    index++;
                    
                }
                i--;
                dynamicArray = (int*)realloc(dynamicArray, i*sizeof(int));
            }
            
            else{
                break;
            }
        }
    }
    
