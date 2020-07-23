/*AIM:Write a program to call function by address.
  ALGORITHM:Step 1:Start a program;
	    Step 2:Define a function named swap with pointer parameters(*) x,y;
	    Step 3:Initialize temp variable t;
	    Step 4:t=*x;
            Step 5:*x=*y;
	    Step 6:*y=*t;
	    Step 7:Finish function swap;
	    Step 8:Start main function;
	    Step 9:Initialize variable a and b;
	    Step 10:Take two numbers;
	    Step 11:Call swap function with address parameters(&);
	    Step 12:Print values of numbers as in main;
	    Step 13:End program;
  PROGRAM:*/
#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
int t;
cout<<"value of x and y before exchange:"<<*x<<"  "<<*y;
t=*x;
*x=*y;
*y=t;
};
int main()
{
int a,b;
cout<<"Enter two integers";
cin>>a>>b;
swap(&a,&b);
cout<<"value of a and b in main is"<<a<<"  "<<b<<endl;
return 0;
}
/*OUTPUT
guest-ychsxh@umit-desktop:~/Desktop$ g++ s5.cc
guest-ychsxh@umit-desktop:~/Desktop$ ./a.out
Enter two integers4 7
value of x and y before exchange:4  7value of a and b in main is7  4
*/
