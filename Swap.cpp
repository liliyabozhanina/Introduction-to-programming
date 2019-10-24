#include  <iostream>

using namespace std;

int main ()
{
    double a, b, temp; //temp is the temporary variable
    cout << "This program swaps the values of two double variables\n"
         << "A and B  by using a temporary variable.\n";
    cout << "A = "; 
    cin >> a;
    cout << "B = "; 
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The numbers after the swapping are:\n";
    cout << "A = " << a << endl << "B = " <<  b << endl;

    /*
    Swapping without temporary variable can be done for example in this way:
    a = a + b;
    b = a - b;
    a = a - b;
    The drawbacks are that we have  additional arithmetic work.
    Also as a consequence of arithmetic the swapping could be inexact!
    */


    return 0;
}
