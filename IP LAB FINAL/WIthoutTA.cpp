#include<iostream>
using namespace std;
class Person
{
 //data members of person
protected://access modifiers
    string name;
    int age;
    float height;
public:
    //constructor
	Person(){cout<<"Person-Empty Constructor is called"<<endl;}
    Person(string n,int a,float h)
    {
        name=n;
        age= a;
        height=h;
        cout<<"Person-Parameterized Constructor is called"<<endl;
    }
    //setter method
    void setName(string n)
    {
       name=n;
    }
    void setAge(int a)
    {
       age=a;
    }
    void setHeight(float h)
    {
     height=h;
    }
  //getter method
    string getName(){return name;}
    int getAge(){return age;}
    float getHeight(){return height;}

    void PersonInfo()//display function
    {
       cout<< endl<<getName()<<"'s information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name   : "<<getName()<<endl;
       cout<< "Your age    : "<<getAge()<<endl;
       cout<< "Your height : "<<getHeight()<<endl;

 }
};
//child class : parent class
class Employee : public Person//single inheritance
{
 // data members of employee
protected://access modifiers
    long int phn_no;
    double emp_id;

public:
    //constructor
    Employee(){cout<<"Employee-Empty Constructor is called"<<endl;}
   Employee(string n,int a,float h,long int p,double Id): Person(n, a, h)
   {
        phn_no = p;
        emp_id =Id;
        cout<<"Employee Constructor is called"<<endl;
    }

   //setter method
void setPhn_No(long int p)
{
    phn_no=p;
}
void setEmp_id(double Id)
{
    emp_id=Id;
}

//getter method
 long int getPhn_No(){return phn_no;}
 double getEmp_id(){return emp_id;}

  void EmployeeInfo()//display method
    {
       cout<< endl<<"Employee's information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name         : "<<getName()<<endl;
       cout<< "Your age          : "<<getAge()<<endl;
       cout<< "Your height       : "<<getHeight()<<endl;
       cout<< "Your phone number : "<<getPhn_No()<<endl;
       cout<< "Your employee id  : "<<getEmp_id()<<endl;
    }

};

class Student: public Person//multi level inheritance
{
 //data members of student
protected://access modifiers
    double student_id;
    string gender;
public:
    //constructor
    Student(){cout<<"Student-Empty Constructor is called"<<endl;};
   Student(string n, int a,float h,double id, string gen): Person(n,a,h)
   {
       student_id=id;
       gender=gen;
       cout<<"Student Constructor is called"<<endl;
   }

   //setter method
void setStudent_id(double ID)
{
    student_id=ID;
}
void setGender(string gen)
{
  gender=gen;
}
//getter method
 double getStudent_id() {return student_id;}
 string getGender() {return gender;}

 //display function
 void StudentInfo()
    {
       cout<< endl<<"Students's information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name                    : "<<getName()<<endl;
       cout<< "Your age                     : "<<getAge()<<endl;
       cout<< "Your height                  : "<<getHeight()<<endl;
       cout<< "Please write your student id : "<<getStudent_id()<<endl;
       cout<< "Please write your gender     : "<<getGender()<<endl;}
};
class Faculty : public Employee
{
    //data members of faculty
protected:
    string department;
public:
    //constructor
    Faculty(){cout<<"Faculty-Empty Constructor is called"<<endl;};
     Faculty(string n, int a,float h,double p,double Id,string dept):Employee(n, a, h, p,Id){
    department=dept;
     cout<<"Faculty Constructor is called"<<endl;
}
void setDepartment(string Dept)
{
 department=Dept;
}
string getDept(){return department;}

void FacultyInfo()//display method
{
       cout<< endl<<"Faculty's information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name         : "<<getName()<<endl;
       cout<< "Your age          : "<<getAge()<<endl;
       cout<< "Your height       : "<<getHeight()<<endl;
       cout<< "Your phone number : "<<getPhn_No()<<endl;
       cout<< "Your employee id  : "<<getEmp_id()<<endl;
       cout<< "Your department   : "<<getDept()<<endl;
}

};
class Officer : public Employee
{
    //data member of officer
protected:
    int joining_year;
    string position;
public:
    Officer(){cout<<"Officer-Empty Constructor is called"<<endl;};
    Officer(string n, int a,float h,double p,double Id,int yr,string pos):Employee(n, a, h, p,Id){
    joining_year=yr;
    position=pos;
     cout<<"Officer Constructor is called"<<endl;
}
void setJoining_year(int yr)
{
  joining_year=yr;
}
void setPosition(string pos)
{
  position=pos;
}
int getJoining_year(){return joining_year;}
string getPosition(){return position;}

void OfficerInfo()
{
       cout<< endl<<"Officer's information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name         : "<<getName()<<endl;
       cout<< "Your age          : "<<getAge()<<endl;
       cout<< "Your height       : "<<getHeight()<<endl;
       cout<< "Your phone number : "<<getPhn_No()<<endl;
       cout<< "Your employee id  : "<<getEmp_id()<<endl;
       cout<< "Your joining year : "<<getJoining_year()<<endl;
       cout<< "Your position     : "<<getPosition()<<endl;

}

};
class ScholarshipStudent: public Student
{
    //data member of scholashipstudent
protected:
    int percentage;
    float minCg;
public:
    ScholarshipStudent(){cout<<"ScholarshipStudent-Empty Constructor is called"<<endl;};
   ScholarshipStudent(string n, int a,float h,double id, string gen,int p, float cg): Student(n,a,h,id,gen)
   {
       percentage=p;
       minCg=cg;
       cout<<"ScholarshipStudent Constructor is called"<<endl;
   }
   void setParcentage(int p)
   {
     percentage=p;
   }
   void setMincg(float cg)
   {
     minCg=cg;
   }
   int getParcentage(){return percentage;}
   float getMincg(){return minCg;}

void ScholarshipStudentInfo()
    {
       cout<< endl<<"ScholarshipStudents's information is showing below."<<endl;
       cout<< "==========================================="<<endl;
       cout<< "Your name                    : "<<getName()<<endl;
       cout<< "Your age                     : "<<getAge()<<endl;
       cout<< "Your height                  : "<<getHeight()<<endl;
       cout<< "Your student id              : "<<getStudent_id() <<endl;
       cout<< "Your gender                  : "<<getGender() <<endl;
       cout<< "Your scholarship parcentage  : "<<getParcentage() <<endl;
       cout<< "Your CGPA                    : "<<getMincg() <<endl;
    }
};
//main function
int main()
{
    Person p1;//object
   string name;
  cout<< "Enter your name: ";
  cin>>name;
  int age;
  cout<< "Enter your age: ";
  cin>>age;
  float height;
  cout<< "Enter your height: ";
  cin>>height;

  p1.setName(name);
  p1.setAge(age);
  p1.setHeight(height);

  p1.PersonInfo();

  Employee e1;
  string name1;
  cout<< "Enter your name: ";
  cin>>name1;
  int age1;
  cout<< "Enter your age: ";
  cin>>age1;
  float height1;
  cout<< "Enter your height: ";
  cin>>height1;
  long int phnNO;
  cout<< "Enter your phone number: ";
  cin>>phnNO;
  double EmpId;
  cout<< "Enter your employee Id : ";
  cin>>EmpId;

  e1.setName(name1);
  e1.setAge(age1);
  e1.setHeight(height1);
  e1.setPhn_No(phnNO);
  e1.setEmp_id(EmpId);
  e1.EmployeeInfo();

  Faculty f1;

  string name2;
  cout<< "Enter your name: ";
  cin>>name2;
  int age2;
  cout<< "Enter your age: ";
  cin>>age2;
  float height2;
  cout<< "Enter your height: ";
  cin>>height2;
  long int phnNO1;
  cout<< "Enter your phone number: ";
  cin>>phnNO1;
  double EmpId1;
  cout<< "Enter your employee Id : ";
  cin>>EmpId1;
  string dept;
  cout<< "Write your department name: ";
  cin>>dept;

  f1.setName(name2);
  f1.setAge(age2);
  f1.setHeight(height2);
  f1.setPhn_No(phnNO1);
  f1.setEmp_id(EmpId1);
  f1.setDepartment(dept);
  f1.FacultyInfo();

  Officer o1;

  string name3;
  cout<< "Enter your name: ";
  cin>>name3;
  int age3;
  cout<< "Enter your age: ";
  cin>>age3;
  float height3;
  cout<< "Enter your height: ";
  cin>>height3;
  long int phnNO2;
  cout<< "Enter your phone number: ";
  cin>>phnNO2;
  double EmpId2;
  cout<< "Enter your employee Id : ";
  cin>>EmpId2;
  int year;
  cout<< "Write your joining year: ";
  cin>>year;
  string position;
  cout<< "Write your position: ";
  cin>>position;

  o1.setName(name3);
  o1.setAge(age3);
  o1.setHeight(height3);
  o1.setPhn_No(phnNO2);
  o1.setEmp_id(EmpId2);
  o1.setJoining_year(year);
  o1.setPosition(position);
  o1.OfficerInfo();

  Student s1;

  string name4;
  cout<< "Enter your name: ";
  cin>>name4;
  int age4;
  cout<< "Enter your age: ";
  cin>>age4;
  float height4;
  cout<< "Enter your height: ";
  cin>>height4;
  double student_id;
  cout<< "Write your student id: ";
  cin>>student_id;
  string gender;
  cout<< "Write your gender: ";
  cin>>gender;
  s1.setName(name4);
  s1.setAge(age4);
  s1.setHeight(height4);
  s1.setStudent_id(student_id);
  s1.setGender(gender);
  s1.StudentInfo();

  ScholarshipStudent q1;

  string name5;
  cout<< "Enter your name: ";
  cin>>name5;
  int age5;
  cout<< "Enter your age: ";
  cin>>age5;
  float height5;
  cout<< "Enter your height: ";
  cin>>height5;
  double student_id1;
  cout<< "Write your student id: ";
  cin>>student_id1;
  string gender1;
  cout<< "Write your gender: ";
  cin>>gender1;
  int parcentage;
  cout<< "Write your scholarship parcentage: ";
  cin>>parcentage;
  float cg;
  cout<< "Write your CGPA: ";
  cin>>cg;

  q1.setName(name);
  q1.setAge(age);
  q1.setHeight(height);
  q1.setStudent_id(student_id);
  q1.setGender(gender);
  q1.setParcentage(parcentage);
  q1.setMincg(cg);
  q1.ScholarshipStudentInfo();


  cout<< "\nTHANK YOU"<<endl;

return 0;
}
