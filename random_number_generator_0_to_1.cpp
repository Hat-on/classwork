#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

double random_number (double n);

int main()
{
    double n,i;
    double r;

    srand(time(NULL));

    cout << "Enter number of dice to roll: ";
    cin >> n;

    for (i=1;i<=n;i++)
    {
        r = random_number(6) +1;
        cout << r << " ";
    }
    system("PAUSE");
    return 0;
}
double random_number(double n)
{
    return n = (0.0 + rand() * (1.0 - 0.0) / RAND_MAX) - 1;
}
