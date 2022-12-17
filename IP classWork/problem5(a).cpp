#include<iostream>
using namespace std;
int main()
{
    int sz;
    cout<<"Students number : ";
    cin>>sz;
    float *arr = new float [sz];

    float maxV;
    maxV = arr[0];
    for(int i=0;i<sz;i++){
        cout<<"Number of "<<i+1<<" student: ";
        cin>>arr[i];

    }
    for(int i=0;i<sz;i++){
        if(maxV < arr[i])
        {
            maxV = arr[i];
        }
    }
    cout<<"Hight's mark : "<<maxV<<endl;
    float secNdmaxV;
     for(int i=0;i<sz;i++){
        if(arr[i]>secNdmaxV)
        {
              if (arr[i] == maxV)
                    continue;
                    secNdmaxV = arr[i];

        }
    } cout<<"Second hight's mark : "<<secNdmaxV<<endl;
     return 0;

}

