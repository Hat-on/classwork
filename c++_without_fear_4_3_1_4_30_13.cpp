/* write a prime factorization so that it prints 0 exception. loop it so the user can input numbers multipletimes */

#include <iostream>
#include <cmath>
using namespace std;
void get_divisors(int n);
int main ()
{
    int n = 0;
    do
    {
        cout << "Enter a number (entering 0 will exit) and press enter: ";
        cin >> n;
        get_divisors(n);
        cout << endl;
    }
    while (n >= 1);
    return 0;
}
void get_divisors(int n)
{
    int i;
    double sqrt_of_n = sqrt(n);
    for (i = 2; i <= sqrt_of_n; i++)
        if (n % i == 0)
    {
        cout << i << ", ";
        get_divisors(n/i);
        return;
    }
    cout <<n;
}
