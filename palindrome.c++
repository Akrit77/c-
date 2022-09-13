#include<iostream>
using namespace std;
class palindrome
{
    int i,rev=0,temp;
    public:
    void input()
    {
        cout<<"enter number"<<"\n";
        cin>>i;
        temp = i;
    }

    void display()
    {   
        cout<<rev<<"\n";
    }

    void reverse()
    {
        if (temp == rev)
            cout<<"Number is palindrome"<<"\n";
        else 
            cout<<"Number is not palindrome"<<"\n";
    }

    void revv()
    {
        while (i>0)
        {
            rev = (rev*10) + i%10;
            i = i/10;
        }   
    }
};

int main()
{
    palindrome p;
    p.input();
    p.revv();
    p.reverse();
    return 0;
}

