#include <stdio.h>
#include <stdlib.h>

void main()
{ int a,b,c;
printf("Enter your two number:");
scanf("%d%d", &a,&b);
printf("choose your case: 1 for add\n 2 for sub\n 3 for mul\n 4 for div\n");
scanf("%d", &c);
switch(c)
{
    case 1: printf("addition is %d",a+b); break;
    case 2: printf("subtraction is %d",a-b); break;
    case 3: printf("multi is %d",a*b); break;
    case 4: printf("division is %d",a/b); break;
    default : printf("invalid number ") ;
}
getchar();
}
