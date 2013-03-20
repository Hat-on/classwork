/*optimize the square root function by calculating the the sqrt of n only once during each function call*/

#include <iostream>
#include <cmath>

using namespace std;
bool prime (int n)
{
    int i;
    double sqrt_of_n;
    sqrt_of_n = sqrt(n);
    for (i = 2; i <= sqrt_of_n; i++)
    {
        if (n%i==0)
        return false;
    }
    return true;
}

int main ()
{
    int i;
    while (true)
    {
        cout << "enter mumber (0=exit) and then press enter: ";
        cin >> i;
        if (i == 0)
            break;
        if (prime(i))
            cout << i << " is prime" << endl;
        else
            cout << i << " is not prime" << endl;
            break;
    }
    return 0;
}
