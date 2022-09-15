#include<iostream>
using namespace std;
class count
{
    string a;
    public:
    void input()
    {
        cout<<"enter a string: ";
        cin>>a;
    }

    void display()
    {
        cout<<"Number of letter is "<<a.length()<<"\n";
    }
};

int main()
{
    count c;
    c.input();
    c.display();
    return 0;
}