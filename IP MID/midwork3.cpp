#include <iostream>
#include <math.h>
using namespace std;

int fact(int n)
{
    if (n == 1)

        return 1;

    return n * fact(n - 1);
}

double sum(int x, int n)
{

    double i, total = 1.0;

    for (i = 1; i <= n; i++) {

        total = total + (pow(x, i) / fact(i + 1));

    }
    return total;
}

int main()
{
    int x, n;

    cout<<" inter value of x: ";
    cin>>x;
    cout<<" inter value of n: ";
    cin>>n;

    cout << "Sum is: " << sum(x, n);



    return 0;
}


