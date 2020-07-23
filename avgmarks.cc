//PROGRAM:
#include <iostream>
using namespace std;
class student
{
 float r,roll_no,a,q;
 string s; 
 public:
 void read()
 {
  int m,p,c;
  cout<<"Enter roll no of student";
  cin>>r;
  cout<<"Name of student";
  cin>>s;
  cout<<"enter marks for maths,physics,chem outoff 50 :";
  cin>>m>>p>>c;
  q=m+p+c;
 }
 void avg()
 {
  a=q/3;
  cout<<"Average is "<<a<<endl;
 }
 /*void per() 
 {
  float p,q1;
 
  q1=q/150;
  p=q1*100;
  cout<<"percent is "<<p<<endl;
 }*/
};
int main()
{
 int n,i;
 student m1;
 cout<<"enter no. of students";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  m1.read();
  m1.avg();
 // m1.per();
 }
 return 0;
}
/*OUTPUT
umi@umi-desktop:~$ cd Desktop
umi@umi-desktop:~/Desktop$ g++ shikha.cc
umi@umi-desktop:~/Desktop$ ./a.out
enter no. of students1
Enter roll no of student2
Name of studentshikha
enter marks for maths,physics,chem outoff 50 :30 42 46
Average is 39.3333*/
//CONCLUSION:Successfully studied program of class student to calculate average of marks:

 
