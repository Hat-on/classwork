/* Write a program that figures out whether a number is divisable by 7*/


#include <iostream>

using namespace std;

int n;

int main()
{
    cout << "Enter a number:" << endl;
    cin >> n;
    if (n % 7 == 0)
    cout << "The number is divisable by 7.";
    else
    cout << "The number does not divide evenly by 7.";
    return 0;
}
