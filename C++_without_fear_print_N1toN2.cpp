/* Write a program to print all of the numbers from n1 to n2, where n1 and n2 are two numbers specified by the user*/


#include <iostream>

using namespace std;

int n1, n2;

int main()
{
    cout << "Enter a number and then press enter:" << endl;
    cin >> n1;
    cout << "Enter a second number and then press enter:" <<endl;
    cin >> n2;
    while (n1 <= n2)
    {
        cout << n1 << " ";
        n1 = n1 + 1;
    }
    return 0;
}
