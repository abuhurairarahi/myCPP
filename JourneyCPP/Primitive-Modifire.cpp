#include <iostream>

using namespace std;

int main()
{
    /* e.g. unsigned int UID = -100; 
    
    Modifier: when we modify any int, short, long, long long type of data with "unsigned"
    modifier then we cannot take any negative value as input; unless it'll give you
    the output as garbage number like: 4294967196 and others.*/

    /*

    - int (unsigned int)
    - __int8 (unsigned __int8)
    - __int16 (unsigned __int16)
    - __int32 (unsigned __int32)
    - __int64 (unsigned __int64)
    - short (unsigned short)
    - long (unsigned long)
    - long long (unsigned long long)

    | **Modifier**   | **Use of Modifier**                                            |
    | -------------- | -------------------------------------------------------------- |
    | `signed`       | Allows both positive and negative integer values               |
    | `unsigned`     | Allows only positive integer values (increases positive range) |
    | `short`        | Reduces size of 'integer' type                                 |
    | `long`         | Increases size of 'integer' type                               |
    | `long long`    | Provides very large 'integer' range                            |
    | `const`        | Prevents value modification                                    |
    | `volatile`     | Tells compiler value may change unexpectedly                   |
    | `mutable`      | Allows modification of class member inside const object        |
    | `auto`         | Automatically deduces variable type (modern C++)               |
    | `register`     | Suggests storing variable in CPU register                      |
    | `static`       | Preserves value between function calls / limits scope          |
    | `extern`       | Declares variable defined in another file                      |
    | `thread_local` | Creates separate variable copy per thread                      |
    | `inline`       | Suggests compiler to expand function inline                    |
    | `virtual`      | Enables runtime polymorphism                                   |
    | `explicit`     | Prevents implicit constructor conversions                      |
    | `constexpr`    | Evaluates expression at compile time                           |
    | `consteval`    | Forces function to be evaluated at compile time                |
    | `constinit`    | Ensures variable is initialized at compile time                |
    | `noexcept`     | Specifies function does not throw exceptions                   |
    | `public`       | Members accessible from anywhere                               |
    | `private`      | Members accessible only inside class                           |
    | `protected`    | Members accessible inside class and derived classes            |

    */

    unsigned int UID = 100; //unsigned: the input value must be positive;
    float CGPA = 3.90;
    long double DoubleNumber = 9.345;
    unsigned short int ShortNumber = -10; //here we check with negative value 
    
    std::cout << UID << " - " << DoubleNumber << " - Using Negative Value: " << ShortNumber << std::endl;
    return 0;
}
