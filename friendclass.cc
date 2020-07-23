/*AIM:Program to make a friend class of another class.
ALGORITHM:Step 1:Start program;
          Step 2:Declare a class sub;
          Step 3:Declare and define class add;
          Step 4:Initialise global variable for class add a,b,sum;
          Step 5:Access specifier public;
          Step 6:Declare a function nos;
          Step 7:Take 2 numbers;
          Step 8:sum=a+b;
          Step 9:Return sum;
          Step 10:Declare friend class sub;
          Step 11:Finish class add;
          Step 12:Declare and define class sub;
          Step 13:Initialise global variable for class sub sub;
          Step 14:Access specifier public;
          Step 15:Declare a function bus and take parameters of class add;
          Step 16:sub=a-b;
          Step 17:Return sub;
          Step 18:Declare main function;
          Step 19:Create object of class add as c;   
          Step 20:Create object of class sub as s;
          Step 21:Call function nos using object c;
          Step 22:Call function bus using object s;
          Step 23:End program;
PROGRAM:*/
#include<iostream>
using namespace std;
class sub;
class add
{
 int a,b,sum;
 public:
 int nos()
 {
  cout<<"Enter nos:"<<endl;
  cin>>a>>b;
  sum=a+b;
  return sum;
 }
 friend class sub;
};
class sub
{
 int sub;
 public:
 int bus(add c)
 {
  sub=c.a-c.b;
  return sub;
 }
};
int main()
{
 add c;
 sub s;
 cout<<"ADD is :"<<c.nos()<<endl;
 cout<<"SUB is :"<<s.bus(c);
 return 0;
}
/*OUTPUT
Enter nos:
5 4  
ADD is :9
SUB is :1
CONCLUSION:Successfully created and executed program to make a friend class of another class.*/


 

