#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
    int cycle = n/2;
    for(int i=0;i<cycle;i++)
        for(int j=i; j<(n-i-1);j++)
    {
        int temp = arr[i][j];
        arr[i][j]=arr[j][n-i-1];
        arr[j][n-i-1]=arr[n-i-1][n-j-1];
        arr[n-i-1][n-j-1]=arr[n-j-1][i];
        arr[n-j-1][i]=temp;

    }
    for(int i=0; i<n; i++,printf("\n"))
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
    return 0;
}
