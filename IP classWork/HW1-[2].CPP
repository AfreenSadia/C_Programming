#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float m, h, BMI;
    string username;

    cout<< "Enter Your name : ";
    cin>> username;
    cout<< "Enter Your weight : "; // mass in kilograms
    cin>> m;
    cout<< "Enter Your height : "; // height is meters
    cin>> h;

    BMI= (m/pow(h,2));
    cout<<"\n"<<username<<"'s body mass index is : "<<BMI<< endl;





    return 0;
}
