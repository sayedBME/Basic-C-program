#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,c;
printf("enter two number\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("a=%d\n b=%d",a,b);
    return 0;
}
