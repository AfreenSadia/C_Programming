#include<iostream>
#include<cmath>

using namespace std;
int main()

{
    int value1,value2;

    cout<< "Enter value1 : ";
    cin>>value1;
    cout<<"Enter value2 : ";
    cin>>value2;

    if(value1%2!=0 && value2%2!=0)
{
    cout<< "Both value is odd number" <<endl;
}
    else if((value1%2==0) && (value2%2!=0))
    {
        cout<<"value1 is even number and value1 is odd number "<<endl;
    }
    else if((value1%2!=0) && (value2%2==0))
    {
        cout<<"value1 is odd number and value2 is even number "<<endl;
    }
    else
    {
        cout<< "Both number is even number "<<endl;
    }

  if(value1>value2)
   {
       cout<<value1<<" is maximum number  "<<endl;
   }
   else
   {
       cout<<value2<<" is maximum number  "<<endl;
   }
    return 0;
}
