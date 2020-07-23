//AIM:WAP to get information of employees using constructor.
#include<iostream>
using namespace std;
class emp
{
 char name[20];
 int id,sal;
 public:
 emp()
 {
  cout<<"Enter name ";
  cin>>name;
  cout<<"Enter id,sal";
  cin>>id>>sal;
  cout<<"Name: "<<name<<endl;
  cout<<"id:   "<<id<<endl;
  cout<<"sal:  "<<sal<<endl;
 }
};
int main()
{ 
 int n,i;
 cout<<"Enter number of employees";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter details for emp\n";
  emp e;
 }
 return 0;
}
/*OUTPUT
Enter number of employees   2
Enter details for emp
Enter name shikha
Enter id,sal 05 875386
Name: shikha
id:   5
sal:  875386
Enter details for emp
Enter name riya
Enter id,sal 028  4365434
Name: riya
id:   28
sal:  4365434*/

