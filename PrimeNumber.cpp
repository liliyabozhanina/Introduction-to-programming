#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "n = "; cin >> n;
   if (!cin)
   {
       cout << "Bad input!\n";
       return 1;
   }
   if (n<=0)
   {
       cout << "This is not a positive integer!";
       return 1;
   }

   if (n == 1)
   {
       cout << "This is not a prime number. \n";
       return 0;
   }

    bool flag = true;
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
		    cout << "This is not a prime number!";
		    flag = false;
		    break;
	    }
	}

	if (flag) cout << "This is a prime number!";
	return 0;


}
