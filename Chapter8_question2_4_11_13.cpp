/*Write a program that outputs all the lyrics of The Twelve Days of Christmas using switch-case*/


#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    do
    {
        cout << "What Day of Christmas is it?" << endl;
        cout << "1?" << endl;
        cout << "2?" << endl;
        cout << "3?" << endl;
        cout << "4?" << endl;
        cout << "5?" << endl;
        cout << "6?" << endl;
        cout << "7?" << endl;
        cout << "8?" << endl;
        cout << "9?" << endl;
        cout << "10?" << endl;
        cout << "11?" << endl;
        cout << "12?" << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "On the " << n << "st day of Christmas my true love gave to me ";
        }
        else if (n == 2)
        {
            cout << "On the " << n << "nd day of Christmas my true love gave to me ";
        }
        else if (n == 3)
        {
            cout << "On the " << n << "rd day of Christmas my true love gave to me ";
        }
        else if (n < 13 && n > 3)
        {
            cout << "On the " << n << "th day of Christmas my true love gave to me ";
        }
        else
        {
            break;
        }
        switch (n)
        //I understand there should be breaks in the switch case but I am using fall through on purpose.
        {
        case 12:
            cout << "12 Lords a leaping ";
        case 11:
            cout << "11 Ladies dancing ";
        case 10:
            cout << "10 Pipers piping ";
        case 9:
            cout << "9 Drummers drumming ";
        case 8:
            cout << "8 Maids a-milking ";
        case 7:
            cout << "7 Swans a-swimming ";
        case 6:
            cout << "6 Geese a laying ";
        case 5:
            cout << "5 Golden rings ";
        case 4:
            cout << "4 Colour'd birds ";
        case 3:
            cout << "3 French hens ";
        case 2:
            cout << "2 Turtle doves ";
        case 1:
            cout << "and a partridge in a pear tree." << endl;
            break;
        }
    } while (n < 13 && n > 0);

}
