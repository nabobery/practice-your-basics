#include <stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,b,i,j,k;
    printf("Enter the rows for matrix 1:");
    scanf("%d",&x);
    printf("Enter the cols for matrix :");
    scanf("%d",&y);    
    printf("Enter the rows for matrix 2:");
    scanf("%d",&b);
    int arr[100][100],brr[100][100];
    printf("Enter elements for matrix 1:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements for matrix 2:\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

    int mul[100][100];
    for(i=0;i<x;i++)
    {
        for(j=0;j<b;j++)
        {
            mul[i][j]=0;
            for(k=0;k<b;k++)
            {
              mul[i][j]=mul[i][j]+arr[i][k]*brr[k][i];
            }
        }
    }
    printf("The final output matrix is:\n");
    for(i=0;i<x;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
        {
            printf("%d",mul[i][j]);
            printf("\t");
        }
    }
    
    return 0;
}
