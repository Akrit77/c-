#include<iostream>
using namespace std;
class num
{
    int a,b;
    public:
    void input()
    {
        cin>>a>>b;
    }

    void display()
    {
        cout<<a<<"\n"<<b<<"\n";
    }
    num operator+(num x)
    {
        num temp;
        temp.a = a + x.a;
        temp.b = b + x.b;
        return temp;
    }

    // num test(num x)
    // {
    //     num temp;
    //     temp.a = a + x.a;
    //     temp.b = b + x.b;
    //     return temp;
    // }
};

int main()
{
    num n1,n2,n3;
    n1.input();
    n2.input();
    n3 = n1 + n2;
    // n1.test(n2);
    n3.display();
}