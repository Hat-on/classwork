/*Take the "menu program" you wrote earlier and break it out into a series of calls to functions for each of the menu items.
Add the calculator and "99 Bottles of Beer" as two different functions that can be called.*/

#include <iostream>
#include <string>

using namespace std;
void name()
{
    cout << "Deborah Hatton" << endl;
}

int phone()
{
    cout << "555-555-5555" << endl;
}

double calc()
{
    double first_argument;
    double second_argument;
    cout << "Please enter first argument: " << endl;
    cin >> first_argument;
    cout << "Please enter second argument: " << endl;
    cin >> second_argument;
                cout << first_argument << " * " << second_argument << " = " << first_argument * second_argument << endl;
                cout << first_argument << " + " << second_argument << " = " << first_argument + second_argument << endl;
                cout << first_argument << " / " << second_argument << " = " << first_argument / second_argument << endl;
                cout << first_argument << " - " << second_argument << " = " << first_argument - second_argument << endl;
}

void BofB ()
{
    int bottlesofbeer = 99;
                for ( int bottlesofbeer = 99; bottlesofbeer > 0; bottlesofbeer -- )
                {
                    cout<< bottlesofbeer;
                    cout<< " bottles of beer on the wall," << endl;
                                cout<< bottlesofbeer;
                                cout<< " bottles of beer." << endl;
                                cout<< "Take one down, pass it around, " <<endl;
        cout<< (bottlesofbeer - 1);
        cout<< " bottles of beer on the wall." << endl;
                }
}

int main()
{
    string n;
    do
    {
        cout << "Please choose from the options listed." << endl;
        cout << "name" << endl;
        cout << "phone" << endl;
        cout << "bottles" << endl;
        cout << "calculator" << endl;
        cin >> n;
    }
    while (n != "name" && n != "phone" && n != "calculator" && n != "bottles");

    if (n == "name")
    {
        name();
    }
    else if (n == "phone")
    {
        phone();
    }
    else if (n == "calculator")
    {
        calc();
    }
    else
   {
        BofB ();
    }

    return 0;
}
