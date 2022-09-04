#include<iostream>
using namespace std;
class author
{
    char name[20], qualification[20];
    public:
    void getData()
    {
        cout<<"enter name and qualification:"<<"\n";
        cin>>name>>qualification;
    }
    void putData()
    {
        cout<<"Name:"<<name<<"\n"<<"Qualification:"<<qualification<<"\n";
    }
};
class publication
{
    char pname[20];
    public:
    void pGetData()
    {
        cout<<"enter publication name:";
        cin>>pname;
    }
    void pPutData()
    {
        cout<<"pName is:"<<pname<<"\n";
    }
};
class book : public author,public publication
{
    public:
    void get()
    {
        getData();
        pGetData();
    }
    void put()
    {
        putData();
        pPutData();
    }
};
int main()
{
    book b;
    b.get();
    b.put();
}