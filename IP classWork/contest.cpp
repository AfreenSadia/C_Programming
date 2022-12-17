#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    int n,a,b;
    cin >> n;
    for(int i = 1; i <= n; i++)
        {
        b = 0;
        cin >> a;
        if(a > 10)
        b = a-10;
        cout << b << " " << a-b <<endl;
    }
    return 0;
}
