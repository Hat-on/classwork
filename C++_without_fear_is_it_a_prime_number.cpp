/* Optimize the program by calculating the square root of n just once rather than over and over.*/


#include <iostream>
#include <cmath>

using namespace std;

int n;
int i;
int is_prime = true;
double sr_of_n;

int main()
{
    cout << "Enter a number and then press enter:" << endl;
    cin >> n;
i = 2;
sr_of_n = (sqrt (n));
while (i <= sr_of_n)
{
    if (n % i == 0)
        is_prime = false;
    i++;
}
if (is_prime)
    cout << "Number is Prime!" <<endl;
else
    cout << "Number is NOT Prime!" <<endl;

    return 0;
}
