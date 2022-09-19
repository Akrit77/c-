#include<iostream>
using namespace std;
class num
{
    public:
    virtual void display()
    {
        cout<<"Base class"<<"\n";
    }
};

class ber:public num
{
    public:
    void display()
    {
        cout<<"Derived class"<<"\n";
    }
};

int main()
{
    ber n;
    num *ptr;
    ptr = &n ;
    ptr -> display();
}