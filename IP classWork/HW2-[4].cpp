//Greatest common divisor
#include <iostream>
using namespace std;
int main()
{
   int num1,num2, gcd;
   cout<< "Find the greatest common divisor of two numbers: "<<endl;
   cout<< "Enter your first number: "<<endl;
   cin>> num1;
   cout<< "Enter your second number: "<<endl;
   cin>> num2;

   for(int i=1;i<=num1 && i<=num2;i++)
   {
       if(num1%i==0 && num2%i==0)
       {
           gcd=i;
       }
   }
   cout<< "The greatest common divisor is: "<<gcd << endl;


    return 0;
}

