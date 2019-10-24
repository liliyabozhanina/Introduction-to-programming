#include  <iostream>

using namespace std;


int main()
{
    int number, sum = 0;
    unsigned countEven = 0;

    cout << "number = "; cin >> number;

    while(number != 0)
    {
        if(number % 2 == 0)
        {
            ++countEven;
            sum += number;
        }

        cout << "number = "; cin >> number;
    }

    if(countEven != 0)
    {
        cout << "The average of the even numbers is: " << (double)sum / countEven << endl;
    }
    else
    {
        cout << "There are no even numbers!\n";
    }

    return 0;
}
