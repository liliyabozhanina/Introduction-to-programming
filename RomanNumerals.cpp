#include  <iostream>

using namespace std;


int main ()
{
   int a;
   cout << "Enter a positive integer number < 90. \na = "; cin >> a;
   if (!cin)
   {
       cout << "This is not an integer number at all. \n";
       return 1;
   }
   if (a < 1 || a > 89)
   {
       cout << "This is not a positive number < 90. \n";
       return 1;
   }

   if (a >= 40 && a <50)
   {
       cout << "XL";
       a -= 40;
   }

   else if (a >= 50)
   {
       cout << "L";
       a -= 50;
   }

   switch ( a / 10 )
   {
       case 3: cout << "X";
       case 2: cout << "X";
       case 1: cout << "X";
   }
   switch ( a % 10)
   {
       case 9: cout << "IX"; break;
       case 8: cout << "VIII"; break;
       case 7: cout << "VII"; break;
       case 6: cout << "VI"; break;
       case 5: cout << "V"; break;
       case 4: cout << "IV"; break;
       case 3: cout << "I";
       case 2: cout << "I";
       case 1: cout << "I";

   }

   return 0;
}
