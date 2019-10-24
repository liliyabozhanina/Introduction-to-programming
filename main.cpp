//This program adds three integer numbers and prints their sum.
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, sum;
    cout << "This program adds three integer numbers" << endl;
    cout << "1st number: ";
    cin >> n1; //extract (>>) an integer number n1 from the standard input stream (cin).
    cout << "2nd number: ";
    cin >> n2;
    cout << "3rd number: ";
    cin >> n3;
    sum = n1 + n2 + n3;
    cout << "The sum is " << sum << endl;
    return 0;
}
