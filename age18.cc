/*AIM:Write a program to input name and age and display record with age>18.
  ALGORITHM:Step 1:Start program;
          Step 2:Declare a class student;
          Step 3:Initialise global variable  float age,string s;
          Step 4:Access specifier public;
          Step 5:Declare a function read;
          Step 6:Take name and age of student;
          Step 7:Declare a function record;
          Step 8:if(age>18) then print s and age;
          Step 9:End class;
          Step 10:Declare main function;
          Step 11:Create object of class student m[99]; 
          Step 12:Initialise variable n,i; 
	  Step 13:Take number of students;
          Step 14:for(i=0;i<n;i++);
          Step 15:Call function read using object m[i];
	  Step 16:for(i=0;i<n;i++);
          Step 17:Call function record using object m[i];
          Step 18:End program;*/
//PROGRAM:
#include <iostream>
using namespace std;
class student
{
 float age;
 string s; 
 public:
 void read()
 {
  cout<<"Name of student";
  cin>>s;
  cout<<"enter age:";
  cin>>age;
 }
 void record()
 {
  if(age>18)
  {
    cout<<s<<"  "<<age<<endl;
  }
 }
};
int main()
{
 int n,i;
 student m[99];
 cout<<"enter no. of students";
 cin>>n;
 for(i=0;i<n;i++)
 {
  m[i].read();
 }
 for(i=0;i<n;i++)
 {
  m[i].record();
 }
 return 0;
}
/*OUTPUT
enter no. of students5
Name of studentshikha       enter age:23
Name of studentriya         enter age:12
Name of studentmital        enter age:18
Name of studentlee          enter age:32
Name of studentchang        enter age:42
shikha  23
lee  32
chang  42
CONCLUSION:Successfully studied a program to input name and age and display reccord with age>18.*/

