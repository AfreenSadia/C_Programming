#include<iostream>
using namespace std;

class Mobile
{
    private:
    string Owner_Name;
    long int  Mobile_Num;
    int Mobile_Balance;
    string Mobile_OS_Name;


    public:
    Mobile()
    {
    Owner_Name= "";
    Mobile_Num =0;
    Mobile_Balance=0;
    Mobile_OS_Name= "";
    cout<<"Empty Account Constructor "<<endl;
    }

    Mobile(string n,long int num, int b, string p)
    {
     Owner_Name= n;
    Mobile_Num=num;
    Mobile_Balance=b;
    Mobile_OS_Name=p;
    cout<<endl<<"Parameterized Mobile Constructor "<< Owner_Name <<endl<<endl;
    }

     ~Mobile()
     {
        cout<<"Destructor is called for "<< Owner_Name <<endl;
    }


     //setter methods
    void setName(string n){
       Owner_Name= n;
    }

    void setNumber(long int num){
       Mobile_Num=num;
    }

    void setBalance(int b){
        Mobile_Balance=b;
    }
      void setOSName(string p){
        Mobile_OS_Name=p;
    }

//getter methods
    string getName(){ return Owner_Name;}
    long int getNumber(){ return Mobile_Num;}
    int getBalance(){ return Mobile_Balance;}
    string getOSName(){return Mobile_OS_Name;}


//showinfo
void showMobileInfo()
{
        cout<<"MOBILE OWNER NAME     : "<<Owner_Name <<endl;
        cout<<" MOBILE NUMBER        : "<<Mobile_Num <<endl;
        cout<<"MOBILE BALANCE        : "<<Mobile_Balance <<endl;
        cout<<"MOBILE OS NAME        : "<<Mobile_OS_Name <<endl;

}
//lockstatus
    bool lockstatus(int i)
    {
        bool lock;
        if(i==0){
            lock=false;}
            else{
                lock=true;
            }
            return lock;
    }

    // recharge
        Mobile Recharge(int p, Mobile m)
        {
        Mobile_Balance = Mobile_Balance+p;
        m.setBalance(m.getBalance()+p);
        cout<<" After recharge new balance is   :  "<<m.getBalance()<<endl;
        cout<<endl<<endl;
        return m;

        }

       //callsomeone
         Mobile Callsomeone(int C, Mobile z)
        {

        Mobile_Balance = Mobile_Balance-(C*0.5);
        z.setBalance(z.getBalance()-(C*0.5));
        cout<<"After call someone now balance is   :  "<<z.getBalance()<<endl;
        cout<<endl<<endl;
        return z;
        }
};
int main()
{
    Mobile m1;
    m1.setName("ADIB");
    m1.setNumber(67427421);
    m1.setBalance(50);
    m1.setOSName( "android");
    m1.showMobileInfo();
    cout<<endl<<endl;
    int b;
    cout<< "Enter 0 for locked mobile and 1 for unlocked mobile:   ";
    cin>>b;
    m1.lockstatus(b);
    m1.showMobileInfo();

   int p;
    cout<< "Enter recharge amount:  ";
    cin>>p;
    m1.Recharge(p,m1);
    cout<<endl<<endl;

    int r;
    cout<< "Enter call call duration:   ";
    cin>>r;
    m1.Callsomeone(r,m1);
    cout<<endl<<endl;

    Mobile m2( "sara",021545112,45, "ISO", "0");
    m2.showMobileInfo();
return 0;
}

