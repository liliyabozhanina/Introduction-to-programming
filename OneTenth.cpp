/*This program demonstrates that the decimal number 0.1
  has an infinite representation in binary and hence
  can't be represented exactly in a computer.
  This is true for every hypothetical precision.
  For different precisions (single(float), double(double), extended(long double))
  we obtain different results (approximations).
  In fact 0.1(10)=0.0001100110011001100.......(2)
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = 0.1F;
    double y = 0.1;
    long double z = 0.1L;
    cout << setprecision(27);
    cout << "For single precision   0.1 = " << x << endl;
    cout << "For double precision   0.1 = " << y << endl;
    cout << "For extended precision 0.1 = " << z << endl;
    return 0;

}
