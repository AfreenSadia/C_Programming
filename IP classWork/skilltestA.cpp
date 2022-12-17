#include <iostream>
using namespace std;
int main()
{
  int num,m=1;

  cout<< "Enter number of number :";
  cin>> num;

  for(int i=0;i<10;i++)
  {
      for(int j=0;j<5;j++)
      {
          cout<<num*m<<"\t";
          m++;

      }
      cout<<endl;
  }


    return 0;
}

