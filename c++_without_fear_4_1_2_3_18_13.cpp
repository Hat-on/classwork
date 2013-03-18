/*Write a function named print_out that prints all the whole numbers from 1 - n. */

#include <iostream>
using namespace std;

int n;

void print_out(int one)
{
    for (one =1; one <= n; one ++)
    {
        cout << one << " ";
    }
}
int main ()
{
    cout << "Please enter a number: " << endl;
    cin >> n;
    print_out(n);
}
