/*Write a program that computes a running sum of inputs from the user, terminating when the
user gives an input value of 0*/

#include <iostream>

using namespace std;

int startingnumber;
int numbertoaddtoit;
int newtotal;

int main()
{

        cout << "Please choose a starting number:" << endl;
        cin >> startingnumber;
        cout << "Please choose a number to add to it:" << endl;
        cin >> numbertoaddtoit;
        cout << startingnumber << " + " << numbertoaddtoit << " = " << startingnumber + numbertoaddtoit << endl;
        newtotal = startingnumber + numbertoaddtoit;
        for ( newtotal; numbertoaddtoit != 0; + numbertoaddtoit)
        {
        cout << "Please choose a number to add to to the total:" << endl;
        cin >> numbertoaddtoit;
        cout << newtotal << " + " << numbertoaddtoit << " = " << newtotal + numbertoaddtoit << endl;
        newtotal = newtotal + numbertoaddtoit;
        }

    return 0;
}
