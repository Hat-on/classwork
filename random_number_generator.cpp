#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int random_number (int n);

int main()
{
    int n,i;
    int r;

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
int random_number(int n)
{
    return rand() % n;
}
