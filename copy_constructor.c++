#include<iostream>
using namespace std;
class copy_
{
private:
    int a,b;
public:
    copy_(int x,int y)
    {
        a = x;
        b = y;
    }

    copy_()
    {}

    copy_(copy_ &c)
    {
        a = c.a;
        b = c.b;
    }
   void display()
   {
        cout<<a+b<<"\n";
   }
};
int main()
{
    copy_ c1(3,4);
    copy_ c2 = c1;
    // c1.display();
    c2.display();
    return 0;
}

