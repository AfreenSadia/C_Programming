//multiplication table
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter any positive integer: ";
    cin>> n;

    for(int i=1; i<=10;i++)
    {
        cout<< n << " * "<< i << " = " << n*i << endl;

    }

    return 0;
}
