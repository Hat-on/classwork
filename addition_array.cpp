#include <iostream>
using namespace std;

int main()
{
    double Array_test[6]={4,5,10,13,22,99};
    double j,k,l,m,total;

    for (int i = 0; i < 6; i++)
    {
        cout << Array_test[i] << " " << endl;
    }
    cout << Array_test[0] << " + " << Array_test[1] << " = " << Array_test[0] + Array_test[1] << endl;
    j = Array_test[0] + Array_test[1];
    cout << j << " + " << Array_test[2] << " = " << j + Array_test[2] << endl;
    k = j + Array_test[2];
    cout << k << " + " << Array_test[3] << " = " << k + Array_test[3] << endl;
    l = k + Array_test[3];
    cout << l << " + " << Array_test[4] << " = " << l + Array_test[4] << endl;
    m = l + Array_test[4];
    cout << m << " + " << Array_test[5] << " = " << m + Array_test[5] << endl;
    total = m + Array_test[5];
    cout << "The sum of the array is " << total << endl;

    return 0;
}
