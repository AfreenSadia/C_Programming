#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int i,large,n;
    cout<<"Find largest value from an array : "<<endl;
    cout<<"============================================="<<endl;
    cout<<"Enter number of elements in the array : ";
    cin>>n;
    cout<<"Enter "<<n<< " elements in the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Element -- "<<i<<" : ";
        cin>>arr[i];
    }
    large=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }

    }
    cout<<"Largest element is : "<<large<<endl;
    return 0;
}

