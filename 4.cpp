/*Expand the password checking program from earlier in this chapter and make it take multiple
usernames, each with their own password, and ensure that the right username is used for the
right password. Provide the ability to prompt users again if the first login attempt failed. Think
about how easy (or hard) it is to do this for a lot of usernames and passwords.*/

#include <iostream>
#include <string>
using namespace std;
int main ()
{
string username;
string password;
cout << "Enter your username: " << "\n";
getline( cin, username, '\n' );
cout << "Enter your password: " << "\n";
getline( cin, password, '\n' );
if ( username == "root" && password == "game" )
{
cout << "Access allowed" << "\n";
}
else if ( username == "snail" && password == "carrot" )
{
cout << "Access allowed" << "\n";
}
else
{
cout << "Bad username or password. Denied access!" << "\n";
}
cout << "Please try again. Enter your username: " << "\n";
getline( cin, username, '\n' );
cout << "Enter your password: " << "\n";
getline( cin, password, '\n' );
if ( username == "root" && password == "game" )
{
cout << "Access allowed" << "\n";
}
else if ( username == "snail" && password == "carrot" )
{
cout << "Access allowed" << "\n";
}
else
{
cout << "Bad username or password. Denied access!" << "\n";
return 0;
}
}
