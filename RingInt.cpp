/*
  This program shows that integer types
  in fact are  RING OF INTEGRES MODULO N; N=2^m, m=16,32,64
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int x,y;
    unsigned long long int x1,y1,z;
    z = 4294967296; //z=2^32

    cout << "Enter x and y in such a way that the product is out of " << endl
         << "the range for (int), but is in the range for (long long int)" << endl;
    cout << "Enter x: "; cin >> x;  // for example x = 100000
    cout << "Enter y: "; cin >> y;  // for example y = 200000

    x1=x; y1=y;

    cout << "The product for int type is: " << x*y << endl;
    cout << "The product for long long int type is: " << x1*y1 << endl;
    cout << "The remainder obtained after the devision of x*y with 2^32 is " << (x1*y1)%z << endl;

    return 0;

}
