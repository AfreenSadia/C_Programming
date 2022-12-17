#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int num[10];

   for(int i=0;i<10;i++)
       {
       cin>> num[i];
       }
    cout<< "Showing arry elements"<<endl;

    for(int i=0;i<10;i++)
    {
         cout<<num[i]<<endl;

    }
   cout<<"Array in reverse order"<<endl;
    for(int i=10-1;i>=0;i--){

        cout<<num[i]<<endl;
    }
   return 0;

}



