#include<stdio.h>
#include<conio.h>
#include"RANDOM.h"

void main()
{
    int n;
    printf("Enter the total number of elements : ");
    scanf("%d",&n);
    int ar[n],i;
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
    bubble_sort(ar,n);
    printf("Sorted elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
    int key,l=0,u=n-1,m,flag=0,index=100;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&key);
    while(l<=u)
        {
            m=(l+u)/2;
            if(ar[m]==key)
            {
                index=m;
                break;
            }
            else
            {
                if(key<ar[m])
                    u=m-1;
                else
                    l=m+1;
            }
        }
        if(index==100)
            printf("The element %d is not found in the list.",key);
        else
            printf("The element %d is found at position %d .",key,(index+1));

}

void bubble_sort(int A[],int N)
{
    int i,j,temp;
    for(i=1;i<=N-1;i++)
        for(j=0;j<=N-1-i;j++)
    {
        if(A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
