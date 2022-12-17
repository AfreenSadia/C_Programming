#include<iostream>
using namespace std;

double percent(double sub1, double sub2 ,double sub3 ,double sub4)
{
double total = sub1 + sub2+sub3+sub4;
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
