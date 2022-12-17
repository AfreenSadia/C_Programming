#include<iostream>
using namespace std;
int main()
{
    int A1[5]={1,2,3,4,5};
    int A2[5]={6,7,8,9,10};
    int A3[5]={11,12,13,14,15};

    int Afinal[15];
    for(int i=0;i<5;i++)
    {
        Afinal[i]=A1[i];
    }
    for(int i=5,j=0;i<10;j++,i++)
    {
        Afinal[i]=A2[j];
    }
    for(int i=10,j=0;i<15;j++,i++)
    {
        Afinal[i]=A3[i];
    }
    cout<< "After marge: "<<endl;
    for(int i=0;i<15;i++)
    {
        cout<< Afinal[i]<<endl;
    }
return 0;
}
