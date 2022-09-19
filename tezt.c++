#include<iostream>
using namespace std;
class complex
{
    int a,b,r;
    public:
    complex(int x,int y)
    {
        a = x;
        b = y;
    }

    void sum()
    {
        cout<<"s"<<a+b;
        cout<<"\n";
    }

    complex(int k)
    {
        a = k;
    }

    complex()
    {a=0; b=0;}

    complex(complex &o)
    {
        a = o.a;
        b = o.b;
    }
};

int main()
{
    complex c1(3,4),c2(5),c3,c4(c1);
    c1.sum();
    complex(4,5);
}