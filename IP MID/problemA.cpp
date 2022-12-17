#include<iostream>
 using namespace std;

 int main()
 {
     int N;
      cout<< "Enter any integer number: ";
      cin>>N;
      ++N;
      ++N;
      cout<<"After incrementing twice: " <<N<<endl;
      --N;
      --N;
      --N;
      cout<< "After decrementing thrice: "<<N<<endl;

     return 0;
 }
