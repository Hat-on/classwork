/*PROBLEM: Implement a simple "password" system that takes a password in the form of a number. Make it
so that either of two numbers is valid, but use only one if statement to do the check.*/

#include <iostream>
#include <string>
using namespace std;
int main ()
{
string password;
cout << "Enter your password: " << "\n";
getline( cin, password, '\n' );
if ( password == "45" || password == "0098")
{
cout << "Access allowed" << "\n";
}
else
{
cout << "Bad password. Denied access!" << "\n";
return 0;
}
}
