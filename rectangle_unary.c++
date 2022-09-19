#include<iostream>
using namespace std;
class rectangle
{
    float length,breadth;
    public:
    void input()
        {
            cout<<"enter l and b"<<"\n";
            cin>>length>>breadth;
        }

    void display()
    {
        cout<<length<<"\n"<<breadth<<"\n";
    }    

    rectangle operator++()
    {
        rectangle temp;
        temp.length = ++length;
        temp.breadth = ++breadth;
        return temp;
    }
};
int main()
{
    rectangle r1;
    r1.input();
    r1 = ++r1;
    r1.display();
    return 0;
}