/*Write a program that displays the first 20 square numbers*/

#include <iostream>

using namespace std;
int main ()
{
                int number_to_square;

                cout << "This program displays the squares of numbers 1 - 20: " << endl;
                for (number_to_square = 1; number_to_square < 21; number_to_square ++)
    {
        cout << number_to_square << " * " << number_to_square << " = " << number_to_square * number_to_square << endl;
    }

    return 0;
}
