#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a,n,arr1[50],i=0,j=0;
    scanf("%d",&a);
    while(a>0)
    {
        arr1[i++]=a%10;
        a/=10;
    }
    n=i;
    int right=-1,left=-1,arr[n];
    for(i=n-1;i>=0;i--)
        arr[j++]=arr1[i];
    for(i=n-1;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]>arr[j])
            {
                if(right==-1)
                {
                    right=i;
                    left=j;
                }
                else if((left<j)&&(right>i))
                {
                    right=i;
                    left=j;
                }
            }
        }
    }
    int t;
    if(right!=-1)
    {
        t=arr[left];
        arr[left]=arr[right];
        arr[right]=t;
    }
    for(i=left+1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}

