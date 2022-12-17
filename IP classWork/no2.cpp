#include<iostream>
using namespace std;
int main()
{
    int array1[25], x,y=0;
    int i, j, k;


       cout<<"Input size of array: ";
       cin>>x;
       cout<<"Input elements in the array: ";
       for(i=0;i<x;i++)
            {

	     cin>>array1[i];
	    }
    cout<<"\nThe unique elements found in the array are: ";
    for(i=0; i<x; i++)
    {
        y=0;
        for(j=0,k=x; j<k+1; j++)
        {

            if (i!=j)
            {
		       if(array1[i]==array1[j])
              {
                 y++;
               }
             }
        }
       if(y==0)
        {
          cout<<array1[i];
        }
    }
       cout<<"\n\n";
}
