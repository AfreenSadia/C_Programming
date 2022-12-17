#include<iostream>

using namespace std;

int main()
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

return 0;
}

