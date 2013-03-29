/*Rewrite the menu program you wrote in the practice problems for the Functions chapter on
page 93 using switch-case*/


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
        int n;
        cout << "Please choose from the options listed.\n";
        cout << "1. name\n";
        cout << "2. phone\n";
        cout << "3. calculator\n";
        cout << "4. bottles\n";
        cin >> n;
    switch (n)
    {
    case 1:
        name();
        break;
    case 2:
        phone();
        break;
    case 3:
        calc();
        break;
    case 4:
        BofB ();
        break;
    }
    return 0;
}
