#include <stdio.h>
#include <stdlib.h>
int max(int x, int y)
{
    return (x>y)?x:y;
}
int main()
{
    int n,arr[100],include=0,exclude=0,temp;
    printf("Enter the array size :  ");
    scanf("%d",&n);
    printf("\nEnter the array elements :\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
            temp = max(include,exclude);
            include = exclude+arr[i];
            exclude = temp;
    }
    printf("The Maximum Sum with no two elements are consecutive is %d",max(include,exclude));
    return 0;
}
