/* Subtraction game*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int subtract_by;
    int total;
    cout << "Would you like to play a game? Pick a starting total.";
    cin >> total;
        while (total <= 1)
    {
        cout << "Enter a larger number so we can begin." <<endl;
        cin >> total;
    }
    cout << "What is the largest number you would like to subtract by? 2 or 3?";
    cin >> subtract_by;
    while (subtract_by != 2 && subtract_by != 3)
    {
        cout << "Please enter 2 or 3 only." <<endl;
        cin >> subtract_by;
    }
    if (subtract_by == 3)
    {
while (true)
{
    if ((total % 4) == 3)
    {
        total = total -3;
        cout << "I am subtracting 3." <<endl;
    }
    else if ((total % 4) == 2)
    {
        total = total -2;
        cout << "I am subtracting 2." <<endl;
    }
    else
    {
        total --;
        cout << "I am subtracting 1." <<endl;
    }
    cout << "New total is " << total << endl;
    if (total == 0)
    {
        cout << "I win!" <<endl;
        break;
    }
    cout << "Enter number to subtract:";
    cin >> n;
    while (n < 1 || n > 3)
    {
        cout << "Input must be a 1, 2 or 3." <<endl;
        cout << "Enter a number to subtract:" <<endl;
        cin >> n;
    }
    total = total - n;
    cout << "New total is " << total <<endl;
    if (total == 0)
    {
        cout << "You win!" <<endl;
        break;
    }
}}
else
    {
while (true)
{
    if ((total % 3) == 2)
    {
        total = total -2;
        cout << "I am subtracting 2." <<endl;
    }
    else ((total % 3) == 1);
    {
        total = total -1;
        cout << "I am subtracting 1." <<endl;
    }
    cout << "New total is " << total << endl;
    if (total == 0)
    {
        cout << "I win!" <<endl;
        break;
    }
    cout << "Enter number to subtract:";
    cin >> n;
    while (n < 1 || n > 2)
    {
        cout << "Input must be a 1 or 2." <<endl;
        cout << "Enter a number to subtract:" <<endl;
        cin >> n;
    }
    total = total - n;
    cout << "New total is " << total <<endl;
    if (total == 0)
    {
        cout << "You win!" <<endl;
        break;
    }
}
}
}
