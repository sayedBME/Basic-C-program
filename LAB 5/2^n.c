#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,x=1,i;
printf("enter the power n \t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    x=x*2;
}
printf(" 2^%d = %d \t",n,x);
    return 0;
}
