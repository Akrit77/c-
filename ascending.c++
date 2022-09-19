#include<iostream>
#include<string.h>
using namespace std;
class acse
{
    int i,j,n;
    char name[20][20],s[20];
    public:
    void input()
    {
        cout<<"enter ";
        cin>>n;

        cout<<"Enter name: "<<"\n";
        for(i=0;i<n;i++)
        {
            cin>>name[i];
        }
    }

    void sort()
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(name[i],name[j])>0)
                {
                    strcpy(s,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],s);
                }
            }
        }
    }

    void display()
    {
        cout<<"Sorted names are :"<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<name[i]<<"\n";
        }
    }
};

int main()
{
    acse a;
    a.input();
    a.sort();
    a.display();
    return 0;
}