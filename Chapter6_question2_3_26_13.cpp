/*Make your calculator program perform computations in a separate function for each type of
computation.*/

#include <iostream>

using namespace std;

double first_argument;
double second_argument;
string sign;

double multiply()
{
    cout << first_argument << " * " << second_argument << " = " << first_argument * second_argument << endl;
}
double add()
{
    cout << first_argument << " + " << second_argument << " = " << first_argument + second_argument << endl;
}
double divide()
{
    cout << first_argument << " / " << second_argument << " = " << first_argument / second_argument << endl;
}
double subtract()
{
    cout << first_argument << " - " << second_argument << " = " << first_argument - second_argument << endl;
}

int main()
{
    cout << "Enter first argument: ";
    cin >> first_argument;
    cout << "Enter operation:";
    cin >> sign;
    cout << "Enter second argument: ";
    cin >> second_argument;

    if ( sign == "*" )
    {
        multiply();
    }
    else if ( sign == "+" )
    {
        add();
    }
    else if ( sign == "/" )
    {
        divide();
    }
    else
    {
        subtract();
    }
}
