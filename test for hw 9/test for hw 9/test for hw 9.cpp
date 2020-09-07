
#include <iostream>
using namespace std;
int main()
{

    cout << "Input a number from 0-4 (all lowercase)\n"; // this is what will pop up first in the cdm
    string x;
    cin >> x;

    int number;
    if ("zero" == x) // for the if and else if statements below, It's giving values for words that I type in from zero to four
    {
        number = 0;
        cout << x << " converted to digits is " << number << ".\n"; // this is thye output if the program is true and i've typed in a valid word
    }
    else if ("one" == x)
    {
        number = 1;
        cout << x << " converted to digits is " << number << ".\n";
    }
    else if ("two" == x)
    {
        number = 2;
        cout << x << " converted to digits is " << number << ".\n";
    }
    else if ("three" == x)
    {
        number = 3;
        cout << x << " converted to digits is " << number << ".\n";
    }
    else if ("four" == x)
    {
        number = 4;
        cout << x << " converted to digits is " << number << ".\n";
    }
    else
    {
        cout << "not a number I know\n";   // if its anything else this line will pop up
    }

}
