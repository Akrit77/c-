#include<iostream>
using namespace std;
class num
{
    public:
    virtual void display() = 0;
};

class ber:public num
{
    private:
    int a=5,b=5;
    public:
    void display()
    {
        cout<<a+b<<"\n";
    }
};

int main()
{
    ber n;
    // num *ptr;
    // ptr = &n ;
    // ptr -> display();
    n.display();
}