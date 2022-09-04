#include<iostream>
using namespace std;
class account
{
    int accNo;
    float balance;
    static float minBalance;
    
    public:
    void input()
    {
        cout<<"enter account number and balance ";
        cin>>accNo>>balance;
    }
    void display()
    {
        cout<<"Account No:"<<accNo<<"\n"<<"Balance :"<<balance<<"\n";
    }
    static void inMin()
    {
        cout<<"enter minimun balance:"<<"\n";
        cin>>minBalance;
    }
    static void outMin()
    {
        cout<<"Min Balance:"<<minBalance<<"\n";
    }
};
float account :: minBalance;

int main()
{
    account a[20];
    int i,n;
    cout<<"enter number of accounts "<<"\n";
    cin>>n;
    for (i=0; i<n; i++)
        a[i].input();
    for (i=0; i<n; i++)
        a[i].display();
    // for (i=0; i<n; i++)
        account :: inMin();
    // for (i=0; i<n; i++)
        account :: outMin();
}