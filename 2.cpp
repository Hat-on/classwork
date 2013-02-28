/* Ask the user for two users' ages, and indicate who is older; behave differently if both are over 100. */

#include <iostream>

using namespace std;

int main()

{
int first_users_age;
int second_users_age;

	cout << "Enter first users age: " << "\n";
	cin >> first_users_age;
    	cout << "Enter second users age: " << "\n";
	cin >> second_users_age;

	if ( first_users_age > 100 && second_users_age > 100 )
	{
		cout << "OMG! You're both super old!\n";
	}
	else if ( first_users_age > second_users_age )
	{
		cout << "The first user is older than the second user.\n";
	}
	else
	{
		cout << "The second user is older than the first user.\n";
	}
}
