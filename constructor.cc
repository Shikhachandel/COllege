/*AIM:Write a program to call constructor and destructor.
 ALGORITHM:Step 1:Start a program;
	   Step 2:Define a class;
	   Step 3:Specify access modifier;
	   Step 4:Initialise constructor of same name as class name and destructor with tilde sign; 
    	   Step 5:Define constructor outside class with scope resolution and print "constructor called";
	   Step 6:Define destructor outside class with scope resolution and print "destructor called";
	   Step 7:Define main function;
 	   Step 8:Create object for class;
	   Step 9:Print"Terminating main";
 	   Step 10:End program;
PROGRAM:*/
#include<iostream>
using namespace std;
class exam
{
 public:
 exam();
 ~exam();
};
 exam ::exam ()
{
 cout<<"Constructor called"<<endl;
}
 exam::~exam()
{
 cout<<"Destructor called"<<endl;
}
int main()
{
 exam x;
 cout<<"Terminating main"<<endl;
 return 0;
}
/*OUTPUT
umi@umi-desktop:~/Desktop$ ./a.out
Constructor called
Terminating main
Destructor calledumi@umi-desktop:~/Desktop$ */


