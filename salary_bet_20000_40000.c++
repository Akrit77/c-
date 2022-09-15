#include<iostream>
using namespace std;
class person
{
    char name[20],add[20];
    float salary;

    public:
    void input()
    {
        cin>>name>>add>>salary;
    }

    void display()
    {
        if (salary >= 20000 && salary <= 40000)
        {
            cout<<name<<"\n";
        }
        else 
        {
            cout<<"Your salary isn't between 20000 and 40000"<<"\n";
        }
    }
};

int main()
{
    person p;
    p.input();
    p.display();
    return 0;
}