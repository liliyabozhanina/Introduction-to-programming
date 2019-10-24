#include  <iostream>

using namespace std;


int main ()
{
    double x,y,z,temp; //temp is the temporary variable
    cout << "This program sorts three double variables with three swaps.\n";
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    // now x is not greater than y
    if (x > z)
    {
        temp = x;
        x = z;
        z =temp;
    }
     // now x is the smallest of the three numbers
     // The last thing to do is to swap  y and z (if y > z).
    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    // now the three numbers are sorted
    cout << "The sorted numbers are:   " << x << ",  " << y << ",  " << z << endl;

    return 0;
}
