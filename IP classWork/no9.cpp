#include<iostream>
#include<cmath>

using namespace std;

int main()
{
int num[10];

    for(int i=0;i<10;i++)
        {
            cin>>num[i];
        }
    cout<<"Printing Array Elements"<<endl;
    for(int i=0;i<10;i++){

        cout<<num[i]<<endl;

    }
    int i;
   if( num[i]%2!=0)
   {
       cout<<num[i]<<" is an odd number  "<<endl;
   }
   else
   {
       cout<<num[i]<<" is an even number  "<<endl;
   }


   return 0;

}



