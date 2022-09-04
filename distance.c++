#include<iostream>
using namespace std;
class distances
{
private:
    float feet,inch;
public:
    void input()
    {
        cout<<"input feet and inches"<<"\n";
        cin>>feet>>inch;
    }

    void display()
    {
        cout<<"add of 2 objs is "<<feet<<"\t"<<inch<<"\n";
    }

    distances add(distances d)
    {
        distances temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        return temp;
    }
};

int main()
{
    distances d1,d2,d3;
    d1.input();
    d2.input();
    d3 = d1.add(d2);
    d3.display();
    return 0;
}


