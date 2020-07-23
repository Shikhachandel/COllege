//AIM:WAP to multiply and divide 2 numbers using inline function.
//PROGRAM:
#include<iostream>
 using namespace std;
class md
{
 public:
 void mult(int a,int b);
 void divi(int x,int y);
};
inline void md::mult(int a,int b)
{
 int c;
 c=a*b;
 cout<<"The multiplication is "<<c<<endl;
}
inline void md::divi(int x,int y)
{
 int z;
 z=x/y;
 cout<<"the division is "<<z<<endl;
}
int main()
{
 int n1,n2;
 cout<<"Enter two numbers";
 cin>>n1>>n2; 
 md m1,m2;
 m1.mult(n1,n2);
 m2.divi(n1,n2);
 return 0;
}
/*OUTPUT
guest-ychsxh@umit-desktop:~$ cd Desktop
guest-ychsxh@umit-desktop:~/Desktop$ g++ s4.cc
guest-ychsxh@umit-desktop:~/Desktop$ ./a.out
Enter two numbers80 4
The multiplication is 320
the division is 20*/

 
