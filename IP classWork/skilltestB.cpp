#include <iostream>
using namespace std;
int main()
{
    int Op;
    float farh, cel;
cout<< "Choose from following options : "<<endl;
cout<< "Select 1 to convert Celsius to Fahrenheit. "<<endl;
cout<< "Select 2 to convert Fahrenheit to Celsius. "<<endl;
cin>> Op;

if(Op =='1')
{
    cout<< "Enter the temperature in Celsius: ";
    cin>> cel;

    farh=(1.8* cel) +32;
    cout<< "Temperature in Fahrenheit is:  "<< farh<< endl;;
}
else if(Op ==2)
{
    cout<< "Enter the temperature in Fahrenheit: ";
    cin>> farh;

    cel=(farh-32)/1.8;
    cout<< "Temperature in Celsius is:  "<< cel<< endl;;
}
  else
        cout<< "Your input is wrong."<<endl;

    return 0;
}

