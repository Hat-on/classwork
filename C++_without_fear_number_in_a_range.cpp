/* Write a program to test a number for being in the range 0-100, inclusive. */


#include <iostream>

using namespace std;

int n;

int main()
{
    cout << "Enter a number and then press enter:" << endl;
    cin >> n;
    if (n >= 0 && n <= 100)
    cout << "number is between 0 - 100";
    else
    cout << "number is not in range";

    return 0;
}
