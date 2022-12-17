#include<iostream>
using namespace std;

int main()
 {
     int arr[10], i, n, num, X=0;

    cout << "Enter size of an array:";
    cin>>n;
    cout << "Enter array elements:";

   for (i = 0; i < n; i++)
        {
        cin >> arr[i];
       }
    cout << "Enter element for delete:";
    cin>>num;

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            arr[i] = arr[i + 1];
            X = 1;
        } else if (X> 0) {
            arr[i] = arr[i + 1];
        }
    }
    cout << "New array list is:";
    for (i = 0; i < n - X; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
