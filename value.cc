/*AIM:Write a program to call function by value.
  ALGORITHM:Step 1:Start a program;
	    Step 2:Define a function named swap with parameters x,y;
	    Step 3:Initialize temp variable t;
	    Step 4:t=x;
            Step 5:x=y;
	    Step 6:y=t;
	    Step 7:Print values after swap;
	    Step 8:Finish function swap;
	    Step 9:Start main function;
	    Step 10:Initialize variable a and b;
	    Step 11:Take two numbers;
	    Step 12:Call swap function;
	    Step 13:Print values of numbers as in main;
	    Step 14:End program;
  PROGRAM:*/
#include<iostream>
using namespace std;
void swap(int x,int y)
{
int t;
cout<<"value of x and y before exchange:"<<x<<"  "<<y<<endl;
t=x;
x=y;
y=t;
cout<<"value of x and y in swap after exchange"<<x<<"  "<<y<<endl;
};
int main()
{
int a,b;
cout<<"Enter two integers";
cin>>a>>b;
swap(a,b);
cout<<"value of a and b in main is"<<a<<"  "<<b<<endl;
return 0;
}
/*OUTPUT
guest-ychsxh@umit-desktop:~$ cd Desktop
guest-ychsxh@umit-desktop:~/Desktop$ g++ s2.cc
guest-ychsxh@umit-desktop:~/Desktop$ ./a.out
Enter two integers34 98
value of x and y before exchange:34  98
value of x and y in swap after exchange98  34
value of a and b in main is34  98*/

