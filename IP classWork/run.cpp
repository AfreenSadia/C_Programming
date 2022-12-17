#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    string arr,arr2;
    int x,k,l,m;

    cout << "How many characters : ";
    cin >>x;
    cout << "Must have character : ";
    cin>>arr;
    cout<< "Write your answer : ";
    cin >> arr2;
    l=arr2.size();
    m=arr.size();
    if(m==1){
    if(x==l){
    for(int i=0,j=0;i<l && j<l;i++,j++)
    {
    if(arr[i]==arr2[j])
        {
            k++;
        }
    }
    if(k>=1){
        cout << "Your given word "<<arr2<<" has "<<x<<" character and character "<<arr;
    }
    else{
        cout<<"You entered word doesn't match.";
    }
    }
    else{
        cout<<"Size doesn't match"<<endl;
    }
    }
    else{
        cout<<"Enter only one must have character"<<endl;
    }
    getch();
}
