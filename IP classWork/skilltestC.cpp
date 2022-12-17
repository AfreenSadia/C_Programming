#include <iostream>
using namespace std;
int main()
{
   int rows=20,S;

   for(int i=1;i<=rows;i++)
   {
       for(S=i;S<rows;S++)
      {
       cout<< " ";
      }
       for(int j=1;j<=(2*i-1);j++)
       {
           cout<<"X";
       }

       cout<<endl;
   }
    return 0;
}

