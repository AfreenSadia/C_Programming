#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int a,b,c,d,e;
   long long bin=0;
   cout<<"Enter a decimal number: "<<endl;
   cin>>a;
   if(a>0)
    {for(int i=0;i<=1000;i++){
      d=a/2;
      c=a%2;
      e=d;
      a=e;
      if(c==1)
        {
        bin+=pow(10,i);
        }
      }
    }
   cout<<"The binary number is: "<<bin<<endl;
   return 0;
}
