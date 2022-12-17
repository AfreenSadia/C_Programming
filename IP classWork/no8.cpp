#include<iostream>
using namespace std;

int main()
{
    int number[25];
    int i,j,X,n;

    cout<< "Enter value: "<<endl;
    cin>>n;
    cout<< "Enter number: "<<endl;
    cin>>number[i];
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(number[i]< number[j])
           {
               X=number[i];
               number[i]=number[j];
               number[j]=X;
           }
       }
   }
   cout<< "the descending order: "<<endl;
   for(i=0;i<n;i++)
    {
        cin>>number[i];
    }

   }
