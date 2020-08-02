#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of stocks in the array :  ");
    scanf("%d",&n);
    printf("Enter the stock value : \n");
    int stock[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&stock[i]);
    }
    int S[n];
    S[0]=1;
    for(int i=1;i<n;i++)
    {
        S[i]=1;
        for(int j=i-1;j>=0 && stock[j]<=stock[i];j--)
        {
            S[i]++;
        }
    }
    printf("\nThe Stock Span is ...\n");
    for(int i=0;i<n;i++)
        printf("%d \n",S[i]);
    return 0;
}
