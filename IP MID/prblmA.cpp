#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int yrs,wks,dys,X;
 cout << "Enter number of days: ";
 cin >> dys;

 yrs=dys/365;
 X=dys%365;
 wks=X/7;
 dys=X%7;

 cout << "Years: "<< yrs << endl;
 cout << "Weeks: " << wks << endl;
 cout << "Remaining Days: " << dys << endl;

 return 0;
}
