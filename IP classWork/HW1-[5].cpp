#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float product_1,product_2,product_3,product_4,product_5;
    int product1_Q1,product2_Q2,product3_Q3,product4_Q4,product5_Q5;
    double total_retail_value;
    product_1=200.75;
    product_2=345.50;
    product_3=775.75;
    product_4=400.35;
    product_5=1200.75;

    cout<< "Enter the quantity sold of product1 : ";
    cin>> product1_Q1;
    cout<< "Enter the quantity sold of product2 : ";
    cin>> product2_Q2;
    cout<< "Enter the quantity sold of product3 : ";
    cin>> product3_Q3;
    cout<< "Enter the quantity sold of product4 : ";
    cin>> product4_Q4;
    cout<< "Enter the quantity sold of product5 : ";
    cin>> product5_Q5;


    total_retail_value = (product_1*product1_Q1)+(product_2*product2_Q2)+(product_3*product3_Q3)+(product_4*product4_Q4)+(product_5*product5_Q5);

    cout<< "Total retail value of products sold : " << total_retail_value << endl;






    return 0;
}
