#include<iostream.h>
#include<conio.h>
int main()
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
return 0;
}
