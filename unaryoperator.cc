//PROGRAM:
#include<iostream>
using namespace std;
class Index
{
    int value;
    public:
    Index()
    {
        value=0;
    }
    int getIndex()
    {
        return value;
    }
    Index operator ++(int)
    {
        Index temp;
        value=value+1;
        temp.value=value;
        return temp;
    }
};
int main()
{
    Index i1,i2;
    cout<<"Index 1="<<i1.getIndex();
    cout<<"\nIndex 2="<<i2.getIndex();
    i1=i2++;
    i2++;
    cout<<"\nIndex 1="<<i1.getIndex();
    cout<<"\nIndex 2="<<i2.getIndex();
    return 0;
}
/*OUTPUT
hermione@granger:~/Documents$ g++ unaryoperator.cc
hermione@granger:~/Documents$ ./a.out
Index 1=0
Index 2=0
Index 1=1
Index 2=2
CONCLUSION:Successfully implemented unary operator program.*/
