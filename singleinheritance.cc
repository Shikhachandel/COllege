//AIM:WAP to implement single inheritance.
#include<iostream>
using namespace std;
class abc
{
    protected:
        char name[15];
        int age;
};
class cde:public abc
{
    float height,weight;
    public: 
        void getdata()
        {
            cin>>name>>age;
            cin>>height>>weight;
        }
        void show()
        {
            cout<<name<<"  "<<age<<"  ";
            cout<<height<<"  "<<weight;
        }
};
int main()
{
     cde x;
     x.getdata();
     x.show();
     return 0;
}
/*OUTPUT
shikha  20  5.5  58
shikha  20  5.5  58*/
