#include  <iostream>

using namespace std;
const double PI = 3.141592653589793;
/*
   These 16 decimal digits are enough to ensure that all the bits
   for the double precision approximation of Pi are correct.
   You can experiment to see that adding more decimal digits will
   not give a different approximation.

   For single precision (float) defining PI = 3.1415927F is OK.
   For extended precision (long double)  PI = 3.1415926535897932385L is OK.
*/

int main ()
{
    double deg, rad;

    cout << "This program transforms degrees in radians\n\n";
    cout << "Enter the angle in degrees: "; cin >> deg;
    rad = PI/180.0*deg;
    cout << "The angle is " << rad << " radians.\n";


    return 0;
}
