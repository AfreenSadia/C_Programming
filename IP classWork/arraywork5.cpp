#include<iostream>
using namespace std;

int main(){
    int minValue,min2Value,size,i,k;
    cout<<"Enter the number of elements: "<<endl;
    cin>>size;
    int *array = new int [size];
    for(int i=0; i<size;i++){
    cout<<"Enter the values: "<<endl;
    cin>>array[i];
     }
      minValue=array[0];
    for(int i=0; i<size;i++){
        if(array[i]<minValue){
           k=array[i];
           min2Value=minValue;
           minValue=k;
           }
           if(array[i]>minValue && array[i]<min2Value){
            min2Value=array[i];
           }
    }
    cout<<"Smallest value is : "<<minValue<<endl;
    cout<<"Second smallest value is : "<<min2Value<<endl;
    return 0;
}
