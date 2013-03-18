/*Write a program that defines and tests a factorial funtion.*/

#include <iostream>
using namespace std;

int n, total = 1;

int factorial(int n)
{
    for (n; n >0; n --)
    {
        total = total * n;
    }
}

int main ()
{
    cout << "Please enter the number you would like to factorial: " << endl;
    cin >> n;
    factorial(n);
    cout << "Factorial is " << total << endl;
}
