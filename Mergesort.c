//PROGRAM:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int merge(int a[],int low,int mid,int high);
int mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    return 0;
}
int merge(int a[],int low,int mid,int high)
{
    int h,i,j,b[999],k;
    h=low;
    i=low;
    j=mid+1;
    do
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h=h+1;
        }
        else
        {
            b[i]=a[j];
            j=j+1;
        }
        i=i+1;
    }
    while((h<=mid)&&(j<=high));
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i=i+1;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i=i+1;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k]=b[k];
    }
    return 0;
}
int main()
{
    int i,a[999];
    float t;
    clock_t start,end;
    srand(1);
    for(i=0;i<1000;i++)
    {
        a[i]=rand()%1000;
        printf("%d ",a[i]);
    }
    printf("\n");
    start=clock();
    mergesort(a,0,999);
    end=clock();
    for(i=0;i<1000;i++)
    {
     printf("%d ",a[i]);
    }
    t=((float)(end-start))/CLOCKS_PER_SEC;
    printf("\nthe time taken  %f",t);
    return 0;
}
/*OUTPUT
for n=10
the time taken  0.000004
for n=100
the time taken  0.000030
for n=1000
the time taken  0.000312
When all are sorted:
for n=10
the time taken  0.000003
for n=100
the time taken  0.000020
CONCLUSION:Successfully studied and executed a program to sort elements using mergesort.*/ 


