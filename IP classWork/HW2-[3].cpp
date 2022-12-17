//sum of digits of a given number
#include <iostream>
using namespace std;
int main()
{
   int x, sum=0;
   cout<< "Enter the number: ";
   cin>>x;
   while( x != 0)
   {
       sum = sum+x % 10;
       x= x/10;
   }

   cout<< "The sum of the given numbers: "<<sum;

    return 0;
}

