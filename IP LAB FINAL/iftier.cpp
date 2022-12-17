#include<iostream> // iostream call
#include<string.h>// string call
using namespace std;

class Person // base class call
{
protected://access modifiers
    string name;
public:
	Person(){cout<<"Person-Empty Constructor is called"<<endl;}
    Person(string n)
    {
        name=n;
        cout<<"Person-Parameterized Constructor is called"<<endl;
    }
    void setName(string n)
    {
       name=n;
    }
string getName(){return name;}
void ShowPerson()
    {
     cout<<"Person Name: "<<getName()<<"\n";
    }
};
class Employ : virtual public Person //Class constructor call for employ
{
protected:
       int salary;
public:
 Employ(){cout<<"Employ-Empty Constructor is called"<<endl;}
   Employ(string n, int s): Person(n)
   {

        cout<<"Employ Constructor is called"<<endl;
    }
void setSalary(int s)
{
    salary=s;
}
int getSalary(){return salary;}

void showEmploy()
    {
    cout<<"Person Name: "<<getName()<<"\n";
    cout<<"Employ salary: "<<getSalary()<<"\n";
    }
};
class Faculty: public Employ //Class constructor call for faculty
{
protected:
       string sub;
public:
     Faculty(){cout<<"Faculty-Empty Constructor is called"<<endl;};//constructor
     Faculty(string sb, int s,string n):Employ (n, s){
    sub=sb;
     cout<<"Faculty Constructor is called"<<endl;
}
void setSub(string sb)
{
 sub=sb;
}
string getSub(){return sub;}

void showFaculty()
    {
    cout<<"Person Name: "<<getName()<<"\n";
    cout<<"Employ salary: "<<getSalary()<<"\n";
    cout<<"Faculty Subject: "<<getSub()<<"\n";
    }
};
class Officer: public Employ //Class constructor call for officer
{
protected:
       string position;
public:
    Officer(){cout<<"Officer-Empty Constructor is called"<<endl;};
    Officer(string n, int s,string pos):Employ(n,s){

    position=pos;

     cout<<"Officer Constructor is called"<<endl;
}
void setPosition(string pos)
{
  position=pos;
}
string getPosition(){return position;}

void showOfficer()
    {
    cout<<"Person Name: "<<getName()<<"\n";
    cout<<"Employ salary: "<<getSalary()<<"\n";
    cout<<"Officer position: "<<getPosition()<<"\n";
    }
};
class Student: virtual public Person //Class constructor call for student
{
protected:
         float cgpa;
public:
    Student(){cout<<"Student-Empty Constructor is called"<<endl;};
   Student(string n,float cg): Person(n)
   {
       cgpa=cg;
       cout<<"Student Constructor is called"<<endl;
   }

void setCGPA(float cg)
   {
     cgpa=cg;
   }
float getCGPA(){return cgpa;}

void showStudent()
    {
    cout<<"Person Name: "<<getName()<<"\n";
    cout<<"Student CGPA: "<<getCGPA()<<"\n";
    }
};
class Scholarship: public Student //Class constructor call for scholarship student

{
protected:
    float parcentage;
public:
    Scholarship(){cout<<"Scholarship-Empty Constructor is called"<<endl;};
   Scholarship(string n,float cg,float p): Student(n,cg)
   {
       parcentage = p;
       cout<<"Scholarship Constructor is called"<<endl;
   }
void setParcentage(float p)
   {
     parcentage=p;
   }
float getParcentage(){return parcentage;}

void ShowScholarship()
    {
      cout<<"Person Name: "<<getName()<<"\n";
      cout<<"Student CGPA: "<<getCGPA()<<"\n";
      cout<<"Scholarship percentage: "<<getParcentage()<<"\n";
      }
};
class TA: public Student,public Employ //Class constructor call for TA which is Hybrid or virtual sub class(share with two main sub class)
{
protected :
    int year;
public:
    TA(){cout<<"TA-Empty Constructor is called"<<endl;}
   TA(string n,int s,float cg,int yr):Person(n), Employ(n,s), Student(n,cg)
   {
        year=yr;
        cout<<"TA Constructor is called"<<endl;
    }
    void setYear(int yr)
    {
        year=yr;
    }
    int getYear(){return year;}

void ShowTA()
    {
    cout<<"Person Name: "<<getName()<<"\n";
    cout<<"Student CGPA: "<<getCGPA()<<"\n";
    cout<<"Teaching Assistant joining year: "<<getYear()<<"\n";
    cout<<"Employ salary: "<<getSalary()<<"\n";
    }
};

int main () //main function call
{
    Person p1;
    p1.setName("Iftier");
    p1.ShowPerson();
}
