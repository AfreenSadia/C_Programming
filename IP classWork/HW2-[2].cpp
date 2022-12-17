//decimal to binary
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int num,bin,rev=0;
   cout<< "Enter decimal number: ";
   cin>>num;

   cout<< "The binary number of "<< num << " is " <<endl;

   while(num!=0)
   {
       bin = num % 2;
       cout << bin;
       num= num/2;
       rev=num;

    return 0;
}

