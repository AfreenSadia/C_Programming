#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int numbrs[10];
    int sum=0;
     for(int i=0;i<10;i++)
        {

        cin>>numbrs[i];
        }
        cout<<"Showing array Elements" <<endl;
        for(int i=0;i<10;i++)
            {
       cout<<numbrs[i]<<endl;
        }

        for(int i=0;i<10;i++)
        {
    sum = sum + numbrs[i];
     }
    cout<< "Summation of array Elements : "<< sum <<endl;

    int mx;
    mx = numbrs[0];
    for(int i=0;i<10;i++)
        {
        if(mx < numbrs[i])
        {
            mx = numbrs[i];
        }
        }
    cout<<"Maximum of array : "<< mx <<endl;



   return 0;

}


