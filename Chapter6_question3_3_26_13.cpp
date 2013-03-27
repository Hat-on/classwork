/*Modify your password program from before to put all of the password checking logic into a
separate function, apart from the rest of the program.*/

#include <iostream>
#include <string>

using namespace std;
string username;
string password;

int pwchecker()
{
    if ( username == "root" && password == "carrot" )
                {
    cout << "Access allowed" << "\n";
                }
    else
                {
    cout << "Bad username or password. Denied access!" << "\n";
    return 0;
                }
}

int main ()
{
                cout << "Enter your username: " << "\n";
                getline( cin, username, '\n' );

                cout << "Enter your password: " << "\n";
                cin >> password;
                pwchecker();
}
