#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j = 1; j <= 2*n-1; j++)
    {
        for(i = 1; i <= 2*n-1; i++)
        {
            if((i+j >= n+1 && j <= n && i <= n) || (j-i <= n-1 && j >= n && i<=n) || (i+j <= 3*n-1 && j >= n && i>= n) || (i-j <= n-1 && j<= n && i>=n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}