 #include<iostream>
 using namespace std;

 class Cube
 {
 public:
        int side;
        Cube(int x)
        {
         side =x;
        }
void display()
{
    cout<< "HelloWorld.";
}
};
int main()
{
     Cube c1(5);
     Cube c2(9);
     Cube c3(4);

     cout<<c1.side;
     cout<<c2.side;
     cout<<c3.side<<endl;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
