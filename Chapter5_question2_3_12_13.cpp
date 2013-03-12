/*Write a menu program that lets the user select from a list of options, and if the input is not one
of the options, reprint the list*/

#include <iostream>

using namespace std;

string name;
string phone;
string n;

int main()
{
    do
    {
        cout << "Please choose from the options listed." << endl;
        cout << "name" << endl;
        cout << "phone" << endl;
        cin >> n;
    }
    while (n != "name" && n != "phone");

    if (n == "name")
    {
        cout << "Deborah Hatton" << endl;
    }
    else
    {
        cout << "555-555-5555" << endl;
    }

    return 0;
}
