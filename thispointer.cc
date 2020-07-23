//AIM:WAP to implement this pointer.
#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    public:
    int setdata(int i)
    {
        cout<<"Address of object:"<<this<<endl;
        this->a=i;
    }
    int showdata()
    {
        cout<<a<<endl<<this<<endl;
        cout<<this->a;
    }
};
int main()
{
    test my;
    my.setdata(65);
    my.showdata();
    return 0;
}
/*OUTPUT
hermione@granger:~/Desktop$ g++ thispointer.cc
hermione@granger:~/Desktop$ ./a.out
Address of object:0x7ffed5c66bd4
65
0x7ffed5c66bd4
65
*/
