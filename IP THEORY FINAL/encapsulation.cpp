/*#include<iostream>
using namespace std;

class Encapsulation
{
    private:
        int x;
    public:
        void set(int a)
        {
            x =a;
        }
        int get()
        {
            return x;
        }
};
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class ExampleEncap{
private:
   int num;
   char ch;
public:
   int getNum(){
      return num;
   }
   char getCh() {
      return ch;
   }
   void setNum(int num) {
      this->num = num;
   }
   void setCh(char ch) {
      this->ch = ch;
   }
};
int main(){
   ExampleEncap obj;
   obj.setNum(100);
   obj.setCh('A');
   cout<<obj.getNum()<<endl;
   cout<<obj.getCh()<<endl;
   return 0;
}*/
/*#include <iostream>
using namespace std;

class Adder {
   public:
      Adder(int i = 0) {
         total = i;
      }
      void addNum(int number) {
         total += number;
      }
      int getTotal() {
         return total;
      };

   private:
      int total;
};
int main() {
   Adder a;

   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}*/
/*#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
*/
/*#include <iostream>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
	public:
		void setDimension(int l, int b)
		{
			length = l;
			breadth = b;
		}
		int getArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt;
	rt.setDimension(7, 4);
	cout << rt.getArea() << endl;
	return 0;
}



