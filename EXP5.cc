/*AIM:Write a function overloading program to calculate area of square,rectangle and circle.
 ALGORITHM:Step 1:Start a program;
	   Step 2:Define a function named area with  parameter s;
	   Step 3:Initialize temp variable a;
	   Step 4:a=s*s;
           Step 5:return a;
	   Step 6:Define a function named area with  parameters s1,s2;
	   Step 7:Initialize temp variable a;
	   Step 8:a=s2*s1;
           Step 9:return a;
	   Step 10:Finish function area;
	   Step 11:Define a function named area with  parameter s3;
	   Step 12:Initialize temp variable a;
	   Step 13:a=3.14*s3*s3;
           Step 14:return a;
 	   Step 15:Start main function;
	   Step 16:Initialize variable p1,p2,p3,s;
	   Step 17:Take one number 's';
	   Step 18:p1=Call area function with parameter s ;
	   Step 19:Print p1;
	   Step 20:Initialize variable s1,s2;
	   Step 21:Take two numbers 's1' and 's2';
	   Step 22:p2=Call area function with parameters 's1','s2' ;
	   Step 23:Print p2;
	   Step 24:Initialize variable s3,s4;
	   Step 25:Take  number 's3';
	   Step 26:p3=Call area function with parameter 's3' ;
	   Step 27:Print p3;
	   Step 13:End program; 
 PROGRAM:*/
 #include <iostream>
 using namespace std;
 float area(int s)
 {
  float a;
  a=s*s;
  return a;
 }
 float area(int s1,int s2)
 {
  float a;
  a=s2*s1;
  return a;
 }
 float area(float s3)
 {
  float a; 
  a=3.14*s3*s3;
  return a;
 }
 main()
 {
  float p1,p2,p3;  
  int s;
  cout<<"Enter a side for square ";
  cin>>s;
  p1=area(s);
  cout<<"The area square is "<<p1<<endl;
  int s1,s2;
  cout<<"Enter sides for rectangle ";
  cin>>s1>>s2;
  p2=area(s1,s2);
  cout<<"The area of rectangle is "<<p2<<endl;
  float s3,s4;
  cout<<"Enter radius for circle ";
  cin>>s3;
  p3=area(s3);
  cout<<"The area of circle is "<<p3<<endl;
  }
/*OUTPUT
umi@umi-desktop:~/Desktop$ g++ s8.cc
umi@umi-desktop:~/Desktop$ ./a.out
Enter a side for square 2
The area square is 4
Enter sides for rectangle 3 4
The area of rectangle is 12
Enter height and base for triangle 5
The area of cicle is 78.5
CONCLUSION:Successfully studied funnction overloading program of area. */

 
