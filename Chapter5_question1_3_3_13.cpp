/* Write a program that prints out the entire lyrics to a full rendition of "99 Bottles of Beer"
Ninety-nine bottles of beer on the wall, Ninety-nine bottles of beer.
Take one down, pass it around, Ninety-eight bottles of beer on the wall.*/


#include <iostream>
#include <string>

using namespace std;

int bottlesofbeer = 99;

int main ()
{
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
