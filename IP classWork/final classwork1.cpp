#include<iostream>
#include<cmath>

using namespace std;

int reverseven( int num)

{
  int rem=0,rev=0;

   while(num>0)
   {
       rem= num%10;
       num=num/10;
       if(rem%2==0)
        {
       rev = rev*10+rem;
       }

   }
return rev;
}
int main()
{
    int num=0;
    int result=0;
    cout<< "Enter Number: ";
    cin>>num;

    result =reverseven(reverseven(num));
    cout<< "Reverse Even Number is: "<<result <<endl;

    return 0;

}
