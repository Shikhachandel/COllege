/*AIM : Write a program to return a square of number using inline function
  AlGORITHM:step 1:Start a program;
	    step 2:Define inline function with keyword inline;
	    step 3:Initialise parameter num to function of whose square is to be taken;
	    step 4:Return (num*num) and end function;
	    step 5:Start main funtion;
	    step 6:Initialise variable float n;
	    step 7:Take the number;
	    step 8:Call inline function;
	    step 9:Display ans;
 	    step 10:End program;
 PROGRAM:*/
#include<iostream>
using namespace std;
inline int sqr(int num)
{
 return num*num;
}
int main()
{
 float n;
cout <<"Enter a no:";
cin>>n;
cout<<"Its square="<<sqr(n)<<endl;
cout<<"sqr(10)="<<sqr(10);
return 0;
}
/*OUTPUT
guest-ychsxh@umit-desktop:~$ cd Desktop
guest-ychsxh@umit-desktop:~/Desktop$ g++ s3.cc
guest-ychsxh@umit-desktop:~/Desktop$ ./a.out
Enter a no:734
Its square=538756
sqr(10)=100guest-ychsxh@umit-desktop:~/Desktop$ */
