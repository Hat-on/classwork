/*Write a password prompt that gives a user only a certain number of password entry attempts—
so that the user cannot easily write a password cracker. 0*/

#include <iostream>
using namespace std;
int main ()
{
    string password;
    int counter = 0;
    cout << "Enter your password: ";
    cin >> password;
    for (; counter < 2 && ( password != "orange" ); counter ++)
    {
        cout << "Wrong password try again: ";
        cin >> password;
    }
    if (counter == 2)
    {
        cout << "Try again later." << endl;
    }
    else if ( password == "orange" )
    {
        cout << "Sucess!" << endl;
    }
    return 0;
}
