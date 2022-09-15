#include<iostream>
using namespace std;
class matrices
{
    int r,c,i,j,a[100][100],b[100][100],sum[100][100];
    public:
    void input()
    {
        cout<<"Enter number of row: ";
        cin>>r;
        cout<<"Enter number of column: ";
        cin>>c;

        for(i=0;i<r;++i)
            for(j=0;j<c;++j)
                {
                    cout<<"Enter element a"<<i + 1<<j + 1<<": ";
                    cin>>a[i][j]; 
                }
        cout<<"\n";
        for(i=0;i<r;++i)
            for(j=0;j<c;++j)
                {
                    cout<<"Enter element b"<<i + 1<<j + 1<<": ";
                    cin>>b[i][j];
                }
    }

    void add()
    {
        for(i=0;i<r;++i)
            for(j=0;j<c;++j)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
    }

    void display()
    {
        for(i=0;i<r;++i)
        {
            for(j=0;j<c;++j)
                {
                    cout<<sum[i][j]<<"  ";
                    // if(j == c - 1);
                }
            cout<<"\n";
        }
    }
};

int main()
{
    matrices m;
    m.input();
    m.add();
    m.display();
    return 0;
}