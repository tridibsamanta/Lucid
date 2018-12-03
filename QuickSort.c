#include<stdio.h>
#include<conio.h>
#include"RANDOM.h"
#include<time.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);
int main()
{
    int i,n=64000;
    int *a = newheader();
    clock_t begin = clock();
    quick_sort(a,0,n-1);
    clock_t end = clock();
    printf("Sorted elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
        double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
        printf("\nTime Spent = %f",time_spent);
}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
