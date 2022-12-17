#include<iostream>
#include<cmath>

using namespace std;

float AreaOfRectangle(float length, float width)
{
    return (length*width);
}
float AreaOfTriangle(float a, float b)
{
    return(0.5*a*b);
}
float AreaOfSquare(float x)
{
    return(x*x);
}
int main()
{
    int n;
    cout<< "(1) area of rectangle "<<endl;
    cout<< "(2) area of triangle "<<endl;
    cout<< "(3) area of square "<<endl;

    cout<< "Enter your option: "<<endl;
    cin>> n;

    if(n==1)
        {
        float length, width;
        cout<< "Enter Length: "<<endl;
        cin>> length;
        cout<< "Enter Width: "<<endl;
        cin>>width;
        cout<< "Area of Rectangle is: "<< AreaOfRectangle(length,width) <<endl;
    }

    else if(n==2)
    {
        float a,b;

        cout<< "Enter A: "<<endl;
        cin>> a;
        cout<< "Enter B: "<<endl;
        cin>> b;
        cout<< "Area of Triangle is: "<< AreaOfTriangle(a,b) <<endl;
    }
    else if(n==3)
    {
       float x;

        cout<< "Enter X: "<<endl;
        cin>> x;
        cout<< "Area of Square is: "<< AreaOfSquare(x) <<endl;

    }
     else
     {
         cout<<"Please select any option"<<endl;
     }
     return 0;
}

