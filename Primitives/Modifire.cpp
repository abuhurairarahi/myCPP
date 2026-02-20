#include <iostream>

using namespace std;

int main()
{
    /*

    | **Modifier**   | **Use of Modifier**                                            |
    | -------------- | -------------------------------------------------------------- |
    | `signed`       | Allows both positive and negative integer values               |
    | `unsigned`     | Allows only positive integer values (increases positive range) |
    | `short`        | Reduces size of 'integer' type                                 |
    | `long`         | Increases size of 'integer' type                               |
    | `long long`    | Provides very large 'integer' range                            |
    | `const`        | Prevents value modification                                    |

    */

    unsigned int AgeLimit = 18;

    //"unsigned" defines that it only allow positive integer values.

    signed int LoanBalance = -10000; 

    signed int PaidBalance = 5000;

    //"signed" defines that it allows both positive & negative integer values.

    //short int UnitperTax = 60000; 
    
    // Out of Range: (–32,768 to 32,767)

    //"short" accepts integers size of only 2 bytes

    short int UnitperTax = 30000; 

    long int CarunitPrice = 1000000000;

    //"long" accepts integers size of 4 or 8 bytes (Depends on system)

    long long int ShowroomunitPrice = CarunitPrice * UnitperTax;

    //"long" accepts integers size of 8 bytes (large size integers)

    const int TotalImportedUnit = 100;

    //"const" identifies the constant; which is fixed & non-changable.

    std::cout << "--- Printing all types of data with modifires ---\n" << std::endl;

    cout << "Age Limit: " << AgeLimit << " years\n";
    cout << "Loan Balance: " << LoanBalance << " taka\n" << "Paid Balance: " << PaidBalance << " taka\n" << endl;
    cout << "--- Car Shipping Details ---\n" << endl;
    cout << "Tax per Unit: " << UnitperTax << " taka\n";
    cout << "Car unit Price: " << CarunitPrice << " taka\n";
    cout << "Showroom unite Price: " << ShowroomunitPrice << " taka\n";
    cout << "Total Imported Unit: " << TotalImportedUnit << " Units\n" << endl;


}
