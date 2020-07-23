#include<stdio.h>
#include<stdlib.h>
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
 int n,a[100],i,s=0,sum=0;
 printf("enter no of records");
 scanf("%d",&n);
 printf("enter records");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 while(n>0)
 {
  quicksort(a,0,n-1);
  s=a[0]+a[1];
  sum=s+sum;
  a[0]=s;
  for(i=1;i<=n;i++) 
  {
   a[i]=a[i+1];
  } 
   n=n-1; 
 }
 printf("sum is %d ",sum);
 return 0;
}
 


                                                                                                                                                                                                                                                                                                                                    
