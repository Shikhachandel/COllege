//AIM:WRITE A PROGRAM TO DEMONSTRATE THE USE OF SCOPE RESOLUTION OPERATOR.
#include<iostream>
using namespace std;
int num=20;
int main()
{
    int num=10;
    cout<<"local="<<num<<endl;
    cout<<"Global="<<::num<<endl;
    cout<<"Global+local="<<::num+num<<endl;
    return 0;
}
/*OUTPUT
local=10
Global=20
Global+local=30*/

