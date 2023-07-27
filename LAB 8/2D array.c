#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50][50],b[50][50];
    int i,j,x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
    b[i][j]=a[j][i];
        }
    }
     for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
