#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n,j,x;
int a[100];
printf("enter the array size \t");
scanf("%d",&x);
for(i=0;i<x;i++)
{ printf("enter the position \t");
    scanf("%d",&n);
    scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
    printf("%d\t",a[i]);
}
    return 0;
}
