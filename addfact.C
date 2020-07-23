#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
 long unsigned int i,j,n=11,sum=0,k;
 double t;
 clock_t start,end;
 clrscr();
 start=clock();
 if(n==1 || n==0)
 {
   printf("the answer is 1");
 }
 else
 {
  for(i=2;i<=n;i++)
  {
   if(i==2)
   {
    k=2;
   }
   else
   {
    k=sum;
   }
   for(j=2;j<=i;j++)
   {
    sum=sum+k;
   }
  }
 printf("the answer is %lu",sum);
 }
 end=clock();
 t=((double)(end-start))/CLOCKS_PER_SEC;
 printf("\nthe time taken  %lf",t);
 getch();
}
 /* output
the answer is 39916800
the time taken  0.000084*/
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

