/*
   This program shows that associativity rule for addition
   is not fulfilled for floating point numbers .
*/

#include  <iostream>
#include  <iomanip>

using namespace std;

int main ()
{
    double x, y, z, w, v;
    x = 0.11;
    y = 104.37;
    z = 45.9;

    w = x + y; w = w + z; //w = (x+y) + z
    v = y + z; v = x + v; //v = x + (y+z)

    cout << setprecision(20);
    cout << "(x+y)+z = " << w << endl;
    cout << " x+(y+z)= " << v << endl;
    if (w != v) cout << "We have different results";

    return 0;
}
