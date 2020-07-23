//AIM:Write a program to calculate power of given number using default arguments.
#include<iostream>
#include<cmath>
using namespace std;
class power
{
    int p;
    public:
        power(int x,int n)
        {
            p=pow(x,n);
            cout<<"POWER OF NUMBER IS "<<p; 
        }
};
int main()
{
    cout<<"Enter number and power required";
    int x,n;
    cin>>x>>n;
    power s(x,n);
    return 0;
}
/*OUTPUT
Enter number and power required3 4
POWER OF NUMBER IS 81*/
