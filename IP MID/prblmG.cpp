#include<iostream>
using namespace std;
class Mobile{
    private:

    string MoblieOwnerName;
    long int MobileNumber;
    double MobileBalance;
    string MobileOSName;
    bool lockStutus;
    double Recharge;
    double perMinute;
    double cost=0.5;


    public:
    Mobile()
    {
        MoblieOwnerName="";
        MobileNumber=0;
        MobileBalance=0;
        MobileOSName="";
        lockStutus=0;
        Recharge=0;
        perMinute=0;

        cout<<"Empty Constructor "<<endl;

    }
     Mobile(string nm,long int num,double bl,string osnm,bool lks,double rg,double pm)
    {
        MoblieOwnerName=nm;
        MobileNumber=num;
        MobileBalance=bl;
        MobileOSName=osnm;
        lockStutus=lks;
        Recharge=rg;
        perMinute=pm;

        cout<<"Parameterized Constructor"<<endl;

    }
    ~Mobile()
        {
            cout<<"Destructor is called "<<endl;
        }
    void setMoblieOwnerName(string nm){
        MoblieOwnerName=nm;
        }

    void setMobileNumber(long int num){
         MobileNumber=num;
        }
    void setMobileBalance(double bl ){
         MobileBalance=bl;
        }
    void setMobileOSName(string osnm){
         MobileOSName=osnm;
        }
    void setlockStutus(bool lks){
    lockStutus=lks;
        }
    void setRecharge(double rg){
         Recharge=rg;
        }
    void setperMinute(double pm){
          perMinute=pm;
        }

       string getMoblieOwnerName()
        {
        return MoblieOwnerName;
        }
        long int getMobileNumber()
        {
        return MobileNumber;
        }
        double getMobileBalance()
        {
        return MobileBalance;
        }

        string getMobileOSName()
        {
        return MobileOSName;
        }

        bool getlockStutus()
        {
        return lockStutus;
        }
        double getRecharge()
        {
        return Recharge;
        }
        double getperMinute()
        {
        return perMinute;
        }

        double RECHARGE()
        {
            double sum=MobileBalance+Recharge;

        return sum;

        }
        double CallSomeone()
        {
            double sum=perMinute*cost;

        return sum;

        }





    void ShowInfo()
        {
            cout<<"ACOUNT DETAILS:-"<<endl;
            cout<<"MOBILE OWNER NAME    : "<<MoblieOwnerName<<endl;
            cout<<"MOBILE NUMBER        : "<<MobileNumber<<endl;
            cout<<"MOBILE BALANCE       : "<<MobileBalance<<endl;
            cout<<"MOBILE OS NAME       : "<<MobileOSName<<endl;
            if(lockStutus){
            cout<<"phone is locked"<<endl;
            }

            else{
            cout<<"RECHARGE BALANCE     : "<<RECHARGE()<<endl;
            cout<<"TOTAL COST FOR "<<perMinute<<" MINUTE CALL: "<<CallSomeone()<<" TAKA"<<endl;
            }

        }

    };


int main()
{
    Mobile s1;
    s1.setMoblieOwnerName("TIHAM");
    s1.setMobileNumber(1716305402);
    s1.setMobileBalance(100);
    s1.setMobileOSName("IOS");
    s1.setlockStutus(false);
    s1.setRecharge(96);
    s1.setperMinute(10);
    s1.ShowInfo();


return 0;
}
