
#include<bits/stdc++.h>
using namespace std;

double percent(double op1, double op2 ,double op3 ,double op4)
{
double total = op1 + op2+op3+op4;
double percentage=(total/400)*100;

return percentage;
}

int main()
{
    double arr[3];
        for(int i=0;i<4;i++){
        cout<<"subject "<<i+1<<" Mark = ";
        cin>>arr[i];
        }
    cout<<percent(arr[0],arr[1],arr[2],arr[3])<<endl;

    return 0;
}
