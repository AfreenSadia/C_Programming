#include <iostream>
#include <string.h>
using namespace std;

int main(){
   char str1;
   string str2="";
   int c,i,j=0,len,size;
   cout<<"How many characters :"<<endl;
   cin>>size;
   cout<<"Must have Character :"<<endl;
   cin>>str1;
   cout<<"Write your answer   :"<<endl;
   cin>>str2;
   len=str2.size();
   if(size==len)
   {
    for(i=0;i<=len;i++)
      {
        if(str2[i]==str1)
          {
            j++;
          }
      }
   if(j>0)
    {
    cout<<"Your given word "<<str2<<" has "<<len<<" characters and character "<<str1<<endl;
    }
   else
    {
    cout<<"Your given word does not match.";
    }
  }
  else
    {
    cout<<"Your given size does not match."<<endl;
    }
return 0;
}

