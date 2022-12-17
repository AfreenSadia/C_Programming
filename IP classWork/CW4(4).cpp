#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int siz;
    cout<<"How many Elements you want to put : ";
    cin>>siz;
    float *arr = new float [siz];
  float i,highest=0,sec_highest=0,pos1,pos2;

/*cout<< "Enter number of elements: ";
  cin>>n;*/
  for(i=0;i<siz;i++)
  {
      cout<< " enter "<< (i+1)<< "th element: ";
      cin>>arr[i];
  }

  for(i=0;i<siz;++i)
  {
      if(arr[i]>highest)
      {
          highest=arr[i];
          pos1=i;
      }
      for(i=0;i<siz];++i)
      {
          if(arr[i]>sec_highest)
          {
              if(arr[i]==highest)
                continue;
              sec_highest=arr[i];
              pos2;
          }

      cout<< "Highest number: "<<highest<<endl;
      cout<< "Second highest: "<<sec_highest<<endl;
  }
   return 0;

}

}

