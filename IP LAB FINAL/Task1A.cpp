#include<iostream>
using namespace std;
//class ClassName{};
class Account
{
    private://access modifiers
    string Account_Name;
    string Account_No;
    int Balance;
    string Account_Type;


    public:
    //empty constructor
    Account()
    {
    Account_Name= "";
    Account_No="";
    Balance=0;
    Account_Type="";
    cout<<"Empty Account Constructor"<<endl;

    }
    //parameterized Constructor
    Account(string n, string i, int b, string x){
     Account_Name= n;
     Account_No=i;
     Balance=b;
     Account_Type=x;
     cout<<"Parameterized Account Constructor"<< Account_Name<<endl;
    }
 //Destructor
     ~Account()
     {
        cout<<"Destructor is called for "<< Account_Name <<endl;
    }

    //setter methods
    void setACCOUNT_NAME(string n)
    {
        Account_Name= n;
    }
     void setACCOUNT_NO(string  i)
    {
        Account_No= i;
    }
     void setBALANCE(int b)
    {
        Balance = b;
    }
     void setACCOUNT_TYPE(string x)
    {
        Account_Type= x;
    }

    //getter methods
    string getACCOUNT_NAME(){ return Account_Name;}
    string getACCOUNT_NO(){ return Account_No;}
    int getBALANCE(){ return Balance;}
    string getACCOUNT_TYPE(){ return Account_Type;}
//showaccountinfo
void showAccountInfo(){
        cout<<"NAME: " <<Account_Name<<endl;
        cout<<"Account No: "<<Account_No <<endl;
        cout<<"Balance: "<<Balance <<endl;
        cout<<"Account Type: "<<Account_Type <<endl;
    }
 //depositing an amount
 Account deposit(int p, Account a)
{
        Balance = Balance+p;
        a.setBALANCE(a.getBALANCE()+p);
        cout<<" After deposite:  "<<a.getBALANCE()<<endl;
        return a;
        }
//withdrawing an amount
Account withdraw(int w, Account a)

{        if(w>Balance)
        cout<<"\n Cannot Withdraw Amount";
        Balance=Balance- w;
        a.setBALANCE(a.getBALANCE()-w);
        cout<< "After withdraw : "<< a.getBALANCE()<<endl;
        return a;
}
//transfering an amount
Account transfer(int c,Account a)
{
         Balance = Balance - c;
        a.setBALANCE(a.getBALANCE()+c);
        cout<<"After Transfer: "<<a.getBALANCE()<<endl;

        return a;
    }
};
//main function
int main()
{
    Account a1,a2;//declaring object
    a1.setACCOUNT_NAME("SADIA AFRIN");
    a1.setACCOUNT_NO("21XXXXXX");
    a1.setBALANCE(20000);
    a1.setACCOUNT_TYPE("BUSINESS");
     cout<<endl;
    a2.setACCOUNT_NAME("SARA ANJUM");
    a2.setACCOUNT_NO("22XXXXXX");
    a2.setBALANCE(220000);
    a2.setACCOUNT_TYPE("PERSONAL");
     cout<<endl;

     int x;
     cout<<"Enter the transfer amount: "<<endl;
     cin>>x;
     a2=a1.transfer(x,a2);
     cout<<endl;
     a1.showAccountInfo();
     cout<<endl;
    a2.showAccountInfo();
    cout<<endl;

     int y;
     cout<<"Enter the deposite amount: "<<endl;
     cin>>y;
     a1=a1.deposit(y,a1);
     cout<<endl;
    a1.showAccountInfo();

     int z;
     cout<<"Enter the deposite amount: "<<endl;
     cin>>z;
     a1=a1.withdraw(z,a1);
     cout<<endl;
    a1.showAccountInfo();
    cout<<endl;

   Account a3("Abdul","20-XXXX3-1",21000,"personal");
    a3.showAccountInfo();
return 0;
}
