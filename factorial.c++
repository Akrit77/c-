#include<iostream>
using namespace std;
class fac
{
    int a,i,sum=1;
    public:
    void input()
    {
        cin>>a;
    }

    void display()
    {
        if (a >= 0)
        {
            for(i=0;i<a;i++)
            {
                sum = sum * (a-i);
            }
            cout<<"Factorial of "<<a<<" is "<<sum<<"\n";
        }
        else
         {
            for(i=0;i<(-a);i++)
            {
                sum = sum * (-a-i);
            }
            cout<<"Factorial of "<<a<<" is "<<-sum<<"\n";
        }
    }
};

int main()
{
    fac f;
    f.input();
    f.display();
}