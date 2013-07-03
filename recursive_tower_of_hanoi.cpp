#include <cstdlib>
#include <iostream>

using namespace std;
void move_rings(int n, int source, int destination, int other);
void exact_move(int source, int destination);

int main()
{
    int n=3;
    move_rings (n,1,3,2);
    system ("PAUSE");
    return 0;
}
void move_rings (int n, int source, int destination, int other)
{
    if (n==1)
    {
        exact_move (source, destination);
    }
    else
    {
        move_rings (n-1, source, other, destination);
        exact_move (source, destination);
        move_rings (n-1, other, destination, source);
    }
}
void exact_move(int source, int destination)
{
        cout << "Move the top ring from " << source << " to " << destination << endl;
}

