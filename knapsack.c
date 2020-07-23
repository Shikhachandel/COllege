//PROGRAM:
#include<stdio.h>
float knapsack(float m,float w[],float p[],float t[],float n)
{
    float x[100],pr=0,max;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        x[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        if(m>0)
        {
            max=0;
            for(j=1;j<=n;j++)
            {
                if(t[j]>max)
                {
                    max=t[j];
		    k=j;
                }
            }
            t[k]=0;
            if(m>=w[k])
            {
                x[k]=1;
                m=m-w[k];
                pr=pr+p[k];
            }
            else
            {
                x[k]=m/w[k];
                m=m-(x[k]*w[k]);
                pr=pr+(x[k]*p[k]);
            }
        }
	else
	{
	    break;
	}
    }
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=%f  ",i,x[i]);    
    }
    printf("profit is %f",pr);
    return 0;
}
int main()
{
    float t[100],n,w[100],m,p[100],k;
    int i,j;
    printf("Enter the number of items");
    scanf("%f",&n);
    printf("Enter the capacity");
    scanf("%f",&m);
    printf("Enter the profit and weight");
    for(i=1;i<=n;i++)
    {
        scanf("%f %f",&p[i],&w[i]);
        t[i]=p[i]/w[i];    
    }
   knapsack(m,w,p,t,n);
   return 0;
}
/*OUTPUT
Enter the number of items7                                                                                                            
Enter the capacity15                                                                                                                  
Enter the profit and weight10  2                                                                                                            
 			   5   3                                                                                                                                     
			  15   5
			  7    7                                                                                                                                     
			  6    1                                                                                                                                     
			  18   4                                                                                                                                     
			  3    1                                                                                                                                     
x[1]=1.000000  x[2]=0.666667  x[3]=1.000000  x[4]=0.000000  x[5]=1.000000  x[6]=1.000000  x[7]=1.000000  
profit is 55.333332  
CONCLUSION:Successfully studied and implemented a program to solve knapsack problem using greedy method. */                                                                                                                                        

