#include<iostream>
using namespace std;
class sum
{
    int i,n,total=0;
    public:
    void input()
    {
        cout<<"Enter number you want sum upto: ";
        cin>>n;
    }

    void add()
    {
        for(i=1;i<=n;i++)
                total = total + i;
            cout<<"Total sum of given number is: "<<total<<"\n";
    }
};

int main()
{
    sum s;
    s.input();
    s.add();
    return 0;
}