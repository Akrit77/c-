#include<iostream>
using namespace std;
class rectangle
{
private:
    /* data */
    float l,b;
public:
    rectangle(float x, float y)
    {
        l = x;
        b = y;
    }

    rectangle()
    {}

    void area()
    {
        cout<<"Area is "<<l*b<<"\n";
    }

    void perimeter()
    {
        cout<<"Perimeter is "<<2*(l+b)<<"\n";
    }
};

int main()
{
    rectangle r1(4,5),r2;
    // r.display();
    r1.area();
    r1.perimeter();
    return 0;
}



