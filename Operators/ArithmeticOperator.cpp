#include <iostream>

using namespace std;

int main()
{
    //Arithmetic Operator: ( + , - , * , / , % )

    int number_one = 10;
    int number_two = 20;

    int sum = number_one + number_two;

    int sub = number_two - number_one;

    int multi = number_one * number_two;

    int div = number_two / number_one;

    /*
    
    how it looks in manual calculation: (a/b)

    b | a | result
        a
      -----
        x

    */

    int mod = number_one % number_two;

    /*
    
    how it looks in manual calculation: (a%b)

    b | a | val
       val
      -----
      result

    */

    //#Attention: we can't use any float data while using mod(%), div(/)

    //float mod_a = 10.5 % 20.2; error!!

    cout << "sum: " << sum << "\n" << "sub: " << sub << "\n" << "multi: " << multi << endl;
    cout << "div: " << div << "\n" << "mod: " << mod << endl;

    return 0;
}