#include <iostream>
using namespace std;

double addition(double Array_test[], int length);

int main()
{
    double a,b,c,d,e,f,g;

    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    cout << "Enter third number " << endl;
    cin >> c;
    cout << "Enter fourth number " << endl;
    cin >> d;
    cout << "Enter fifth number " << endl;
    cin >> e;
    cout << "Enter sixth number " << endl;
    cin >> f;
    cout << "Enter seventh number " << endl;
    cin >> g;

    double Array_test[7]={a,b,c,d,e,f,g};
    for (int i = 0; i < 7; i++)
    {
        cout << Array_test[i] << " ";
    }
    double sum = addition(Array_test, 7);
    cout << "The sum of the array is " << sum << endl;
    return 0;
}

double addition(double Array_test[], int length)
{
    double sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += Array_test[i];
    }

    return sum;
}
