/* Write a small calculator that takes as input one of the four arithmetic operations, the two
arguments to those operations, and then prints out the result.*/

#include <iostream>
using namespace std;
int main()
{
int first_argument;
int second_argument;
string sign;
cout << "Enter first argument: ";
cin >> first_argument;
cout << "Enter operation:";
cin >> sign;
cout << "Enter second argument: ";
cin >> second_argument;

if ( sign == "*" )
{
      cout << first_argument << " * " << second_argument << " = " <<
first_argument * second_argument << endl;
}
else if ( sign == "+" )
{
    cout << first_argument << " + " << second_argument << " = " <<
first_argument + second_argument << endl;
}
else if ( sign == "/" )
{
    cout << first_argument << " / " << second_argument << " = " <<
first_argument / second_argument << endl;
}
else
{
    cout << first_argument << " - " << second_argument << " = " <<
first_argument - second_argument << endl;
}
}
