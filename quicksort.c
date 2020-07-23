//PROGRAM:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int interchange(int a[],int i,int j);
int partition(int a[],int m,int p);
int quicksort(int a[],int p,int q)
{
 int j;
 if(p<q)
 {
  j=partition(a,p,q);
  quicksort(a,p,j-1);
  quicksort(a,j+1,q);   
 }
 return 0;
}
int partition(int a[],int m,int p)
{
 int v,i,j,last;
 v=a[m];
 i=m;
 j=p+1;
 do
 { 
  do
  {
   i=i+1;
  }while(a[i]<v&&i<last);
  do
  { 
   j=j-1;
  }while(a[j]>v);
  if(i<j)
  {
   interchange(a,i,j);
  } 
 }while(i<j);
 a[m]=a[j];
 a[j]=v;
 return j;
}
int interchange(int a[],int i,int j)
{
 int p;
 p=a[i];
 a[i]=a[j];
 a[j]=p;
 return 0;
}
int main()
{
 int i,a[9];
 float t;
 clock_t start,end;
 srand(1);
 for(i=0;i<10;i++)
 {
  a[i]=rand()%10;
  printf("%d ",a[i]);
 }
 printf("\n");
 start=clock();
 quicksort(a,0,9);
 end=clock();
 for(i=0;i<10;i++)
 {
  printf("%d ",a[i]);
 }
 t=((float)(end-start))/CLOCKS_PER_SEC;
 printf("\nthe time taken  %f",t);
 return 0;
}
/*OUTPUT
for n=10
the time taken  0.000003
for n=100
the time taken  0.000019
for n=1000
the time taken  0.000227
When all are already sorted:
for n=10
the time taken  0.000004
for n=100
the time taken  0.000036
Conclusion:Successfully studied and executed program to sort elements using quicksort.*/

