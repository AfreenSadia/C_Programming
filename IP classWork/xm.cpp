#include<iostream>
using namespace std;
int main()
{
    char arr[50],arr2[50];
    int x;

    cout << "How many characters : ";
    cin >>x;
    cout << "Must have character : ";
    cin>>arr2;
    cout<< "Write your answer   : ";
    cin >> arr;

    for(int i=0,j=0;i<5 && j<1;i++,j++)
    {
        if(arr2[j]==arr[i])
        {
            cout << "Your given word "<<arr<<" has "<<x<<" character and character "<<arr2;
        }
    }
    return 0;
}
