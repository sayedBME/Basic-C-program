#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b;
printf("enter two number\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\t b=%d",a,b);

    return 0;
}
