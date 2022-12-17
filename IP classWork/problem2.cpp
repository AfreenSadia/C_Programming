#include<iostream>
using namespace std;

int main()
{

    string NUMB;
    cout<<"Enter an Integer Number: ";
    cin>>NUMB;

    int szarr = NUMB.size();

     for(int i =szarr - 1 ; i >= 0 ; i--)
        {
        int x = NUMB[i] - '0';

         if(x%2 == 0)
         {
             cout<<x;
         }
        }



    return 0;
}
