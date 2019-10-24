#include  <iostream>
#include  <iomanip>
#include  <cmath>

using namespace std;


int main ()
{
    float a, b, c, d, x1, x2;
    cout << "This program founds the real roots of the equation a*x^2 + b*x + c = 0.\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << setprecision (20);

    if (a == 0.0)
    {
        cout << "The equation is linear.\n";
        if (b == 0.0)
        {
            if (c == 0.0)
            {
                cout << "Every x is a solution.\n";
            }
            else
            {
                cout << "No x is a solution.\n";
            }
        }
        else
        {
            cout << "The equation has exactly one solution x = " << -c/b << endl;
        }

    }
    else
    {

        cout << "The equation is quadratic. \n";
        d = b*b - 4.0*a*c;
        if (d < 0.0)
        {
            cout << "The equation has no real solutions.\n";
        }
        else
        {
           d = sqrt(d);
           /* Algorithm 1 (the standard algorithm)

              For a=1.0, b=-10000.00001, c=1.0 for example
              this algorithm will suffer from cancellation
              because b~sqrt(b^2-4ac).the exact solution is x1=10000,x2=0.00001
              and this algorithm gives for single precision (float) x2=0.

              For more information see https://en.wikipedia.org/wiki/Loss_of_significance
           */
           x1 = (-b-d)/(2.0*a); x2 = (-b+d)/(2.0*a);
           cout << "Algorithm 1 gives:\n" << "x1 = " << x1 << endl <<"x2 = " << x2 << endl;

           // Algorithm 2. This algorithm overcomes the cancellation
           if (b>0)
           {
               x1 = (-b-d)/(2.0*a); x2 = c/(a*x1);
           }
           else
           {
               x2 =  (-b+d)/(2.0*a); x1 =c/(a*x2);
           }
           cout << "Algorithm 2 gives:\n" << "x1 = " << x1 << endl <<"x2 = " << x2 << endl;


        }


    }

    return 0;
}
