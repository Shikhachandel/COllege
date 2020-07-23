/*AIM:Program to make a friend function of a class.
ALGORITHM:Step 1:Start program;
          Step 2:Declare a class number;
          Step 3:Initialise global variable for class n1,n2;
          Step 4:Access specifier public;
          Step 5:Declare a function no;
          Step 6:Take 2 numbers;
          Step 7:Finish program;
          Step 8:Declare friend function mul;
          Step 9:Finish class;
          Step 10:Declare function mul;
          Step 11:Return multiplication of numbers;
          Step 12:Finish function;
          Step 13:Declare main function;
          Step 14:Initialise variable ans;   
          Step 15:Create object of class number as n;
          Step 16:Call class using object;
          Step 17:Call function mul;
          Step 18:Print multiplication;
          Step 19:End program;
PROGRAM:*/
#include<iostream>
using namespace std;
class number
{
 int n1,n2;
 public:
 int no()
 {
  cout<<"Enter numbers"<<endl;
  cin>>n1>>n2;
  return 0;
 }
 friend int mul(number n);
};
int mul(number n)
{
 return (n.n1*n.n2);
}
int main()
{
 int ans;
 number n;
 n.no();
 ans=mul(n);
 cout<<"The answer is  "<<ans;
 return 0;
}
/*OUTPUT
Enter numbers
2 3
The answer is  6
CONCLUSION:Successfully made and executed program of friend function of a class*/
