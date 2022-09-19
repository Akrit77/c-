#include<iostream>
using namespace std;
class number
{
    float a,b,c,d,e,sum,product,avg;
    public:
    void input()
    {
        cin>>a>>b>>c>>d>>e;
    }

    void add()
    {
        sum = a+b+c+d+e;
        cout<<sum<<"\n";
    }

    void pro()
    {
        product = a*b*c*d*e;
        cout<<product<<"\n";
    }

    void average()
    {
        avg = sum/5;
        cout<<avg<<"\n";
    }
};

int main()
{
    number n;
    n.input();
    n.add();
    n.pro();
    n.average();
    return 0;
}