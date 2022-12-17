#include<iostream>

using namespace std;

int main()

 {
     int x,y, sum=0;
     cin>>x>>y;

     for(int i=x+1; i<y; i++)
     {
         if(i%2==0)
         {
             sum = sum+i;
         }
     }
       cout<< " First number : "<<x<<endl;
       cout<< " Second number : "<<y<<endl;
       cout<< "Sum of Even number between "<<x<< " and "<<y<< " is : "<<sum<<endl;





return 0;
}




