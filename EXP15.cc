//AIM:WAP to implement virtual classes having their derived classes invoking their base class's constructors through the initialization section.
#include <iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    A()
    {
        x=-1;
    }
    A(int i)
    {
        x=i;
    }
    int geta()
    {
        return x;
    }
};
class B: virtual public A
{
    protected:
    int y;
    public:
    B(int i, int k): A(i)
    {
        y=k;
    }
    int getb()
    {
        return y;
    }
    void show()
    {
        cout<<x<<" "<<geta()<<" "<<getb();
    }
};
class C: virtual public A
{
    protected:
    int z;
    public:
    C(int i, int k):A(i)
    {
        z=k;
    }
    int getc()
    {
        return z;
    }
    void show()
    {
        cout<<x<<" "<<geta()<<" "<<getc();
    }
};
class D: public B, public C
{
    public:
    D(int i, int j):B(i, j), C(i, j)
    {}
    void show()
    {
        cout<<x<<" "<<geta()<<" "<<getb();
        cout<<" "<<getc()<<" "<<getc();
    }
};
int main()
{
    D d1(3, 5);   //default A() invoked here
    cout<<"d1: ";
    d1.show();
    B b1(7, 9);
    cout<<"\n"<<"b1: ";
    b1.show();
    C c1(11, 13);
    cout<<"\n"<<"c1: ";
    c1.show();
}
/*OUTPUT
d1: -1 -1 5 5 5
b1: 7 7 9
c1: 11 11 13 */
                                                                                
                                                                                
                                                                                

