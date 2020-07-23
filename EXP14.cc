//AIM:WAP to print salary slip in the following format. 
//PROGRAM:
#include<iostream>
using namespace std;
class emp
{
 char name[20];
 int id,sal;
 float da,hra,ta,ts;
 public:
 int details()
 {
  cout<<"Enter name ";
  cin>>name;
  cout<<"Enter id,sal";
  cin>>id>>sal;
  return 0; 
 }
 int cal()
 {
  da=0.15*sal;
  hra=0.2*sal;
  ta=0.3*sal;
  ts=sal+da+hra+ta;
  return 0;
 }
 int display()
 {
  cout<<"Name: "<<name<<endl;
  cout<<"id:   "<<id<<endl;
  cout<<"sal:  "<<sal<<endl;
  cout<<"DA:  "<<da<<endl;
  cout<<"HRA: "<<hra<<endl;
  cout<<"TA: "<<ta<<endl;
  cout<<"ts: "<<ts<<endl;
  return 0;
 }
};
int main()
{ 
 int n,i;
 emp e;
 cout<<"Enter number of employees\n";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter details for emp\n";
  e.details();
  e.cal();
  e.display();
 }
 return 0;
}
/*OUTPUT
umi@umi-desktop:~$ cd Desktop
umi@umi-desktop:~/Desktop$ g++ Emp.cc
umi@umi-desktop:~/Desktop$ ./a.out
Enter number of employees
1
Enter details for emp
Enter name shikha
Enter id,sal 1 900000
Name: shikha
id:   1
sal:  900000
DA:  135000
HRA: 180000
TA: 270000
ts: 1.485e+06
CONCLUSION:Successfully created and executed program to calculate total salary of class emp.*/




