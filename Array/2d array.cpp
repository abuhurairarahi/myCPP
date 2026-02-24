#include <iostream>

using namespace std;

int main()
{
    /*
    
    2D Array: while two arrays are inter-connected. It stores data in rows and columns, like a table or matrix.

    [ row 0 ]  1   2   3
    [ row 1 ]  4   5   6
    [ row 2 ]  7   8   9
                ↑
             columns

    */

    //initializing 2D array: structure --> data-type variableNaming [row][column];

    int integer2DArray [5][5];

    //it'a 5x5 matrix


    /*
    
    taking input for array; for this we need two loops
    first loop controls the "row", second loop controls the "column"

    */


    //loop for row
    int i = 0;

    while(i < 5)
    {
        //loop for column
        int j = 0;
        
        while(j < 5)
        {
            cout << "Enter element for row " << i << " column " << j << " : ";
            cin >> integer2DArray[i][j];
            cout << "\n";

            j++; //increment
        }

        i++; //increment
    }


    //getting output

    cout << "Output Matrix (2D Array): " << endl;

    //loop for row
    i = 0;

    while(i < 5)
    {
        //loop for column
        int j = 0;
        
        while(j < 5)
        {
            cout << integer2DArray[i][j] << " ";  //same as input; difference is in command "cout"

            j++; //increment
        }

        cout << "\n";

        i++; //increment
    }

    return 0;

}