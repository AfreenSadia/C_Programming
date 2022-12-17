#include<iostream>??
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the array size    : ";
    cin>>n;
    int *arr=new int[n];
        cout<<"Enter the elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i+1<<" No eliment: ";
        cin>>arr[i];
    }
    cout<<"Inserted arrays are......."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    cout<<"\n===================================="<<endl;
    cout<<"The odd and even numbres are: "<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" is even  number"<<endl;
        }
        else
            {
             cout<<arr[i]<<" is odd  number"<<endl;
        }

    }
        return 0;
}
