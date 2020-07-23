#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
 long unsigned int i,n=11,sum=1;
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
    sum=sum*i;
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
the time taken  0.000087*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

