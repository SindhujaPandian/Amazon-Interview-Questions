
#include <stdio.h>
#include <stdlib.h>
int minimum(int *arr,int k)
{
    int min=arr[0];
    for(int i=1;i<k;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
void RemoveAndAdd(int *temp, int k, int min, int add)
{
    for(int i=0;i<k;i++)
    {
        if(temp[i]==min)
            temp[i]=add;
    }
}
int main()
{
    int n, arr[100], k, min;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the K value : ");
    scanf("%d",&k);
    int temp[k];
    for(int i=0;i<k;i++)
        temp[i]=arr[i];
    min = minimum(temp,k);
    for(int i=k;i<n;i++)
    {

        if(arr[i]>min)
        {
             RemoveAndAdd(temp,k,min,arr[i]);
             min = minimum(temp,k);
        }

    }
    for(int i=0;i<k;i++)
        printf("%d\t",temp[i]);
    return 0;
}
/*
#include<stdio.h>
#include<stdio.h>
int main()
{
    int n, arr[100], k, index;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the K value : ");
    scanf("%d",&k);
    while(k>0)
    {
        int max=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>max)
            {
                 max=arr[i];
                 index=i;
            }

        }
        printf("%d",max);
        arr[index]=0;
        k--;
    }
}
*/
