#include<iostream>
using namespace std;
int main()
{
  int OP;
   cout<< "Choose from following options : "<<endl;
   cin>>OP;

   if(OP==1)
   {
        int array1[25];
	int array2[25];
	int array3[25];
    int x,num=1,y=0;
    int i, j;

       cout<<"Input the Size of array :";
       cin>>x;

       cout<<"Input elements :";
       for(i=0;i<x;i++)
        {

        cin>>array1[i];
	    }

		for(i=0;i<x; i++)
        {
		array2[i]=array1[i];
		array3[i]=0;
        }

	for(i=0;i<x; i++)
        {
		for(j=0;j<x;j++)
			{
				if(array1[i]==array2[j])
				{
				array3[j]=num;
				num++;
				}
			}
			num=1;
        }

   for(i=0; i<x; i++)
    {
      if(array3[i]==2)
        {y++;}
    }
      cout<<"The total number of duplicate elements: "<<y;

   }

   else if(OP==2)
    {
            int array1[25], x,y=0;
    int i, j, k;


       cout<<"Input size of array: ";
       cin>>x;
       cout<<"Input elements in the array: ";
       for(i=0;i<x;i++)
            {

	     cin>>array1[i];
	    }
    cout<<"\nThe unique elements found in the array are: ";
    for(i=0; i<x; i++)
    {
        y=0;
        for(j=0,k=x; j<k+1; j++)
        {

            if (i!=j)
            {
		       if(array1[i]==array1[j])
              {
                 y++;
               }
             }
        }
       if(y==0)
        {
          cout<<array1[i];
        }
    }
       cout<<"\n\n";
    }
    else if(OP==3)
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
    }

    else if(OP==4)
    {
         int arr[50];
    int i,mx,mn,n;
    cout<<"Find Minimum & Maximum value from an array : "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Enter number of elements in the array : ";
    cin>>n;
    cout<<"Enter "<<n<< " elements in the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Element -- "<<i<<" : ";
        cin>>arr[i];
    }
    mx=arr[0];
    mn=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
    }
    cout<<"Maximum element is : "<<mx<<endl;
    cout<<"Minimum element is : "<<mn<<endl;
    }

    else if(OP==6)
    {
        int a[20],n,x,i,pos=0;
	cout<<"Enter size of array:";
	cin>>n;
	for(i=0;i<n;++i)
		cin>>a[i];

	cout<<"Enter element to insert:";
	cin>>x;

	for(i=0;i<n;++i)
		if(a[i]<=x&&x<a[i+1])
		{
			pos=i+1;
			break;
		}

	for(i=n+1;i>pos;--i)
		a[i]=a[i-1];

	a[pos]=x;

	cout<<"\nArray after inserting element:\n";

	for(i=0;i<n+1;i++)
		cout<<a[i]<<" ";
    }

    else if(OP==7)
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
    }
    else if(OP==7)
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

    }
   else if(OP==8)
    {
        int arr[10];
    int n, i, j, X;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                X= arr[i];
                arr[i] = arr[j];
                arr[j] = X;
            }
        }
    }
    cout << "Second largest number : " << arr[1]<<endl;
    cout << "Second smallest number : " << arr[n - 2];
    }
  else if(OP==9)
  {
      int n,i;
    cout<<"Enter the array size    : ";
    cin>>n;
    int *arr=new int[n];
        cout<<"Enter the elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i+1<<" No eliment: ";
        cin>>arr[i];
    }
    cout<<"Inserted arrays are......."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    cout<<"\n===================================="<<endl;
    cout<<"The odd and even numbres are: "<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" is even  number"<<endl;
        }
        else
            {
             cout<<arr[i]<<" is odd  number"<<endl;
        }

    }
  }
else if(OP==10)
{
    int a[10],i,j,X,Y;

for(i=0;i<5;i++)
{
cout<<"Enter the no."<<endl;
cin>>a[i];
}

cout<<"======================================="<<endl;
cout<<"Prime numbers are: "<<endl;

for(i=0;i<5;i++)
{
X=0;
for(j=2;j<a[i];j++)
{
Y=a[i]%j;
if(Y==0)
{
X=1;
break;
}
}
if(X==0)
cout<<a[i]<<endl;
}
}
    return 0;
}
