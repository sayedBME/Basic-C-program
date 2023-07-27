#include <stdio.h>
#include <stdlib.h>

int main()
{ float x,y,sum,sub,mul,div;
printf("Enter the first number \t");
scanf("%f",&x);
printf("enter the second number\t");
scanf("%f",&y);
sum = x + y;
sub = x - y;
mul = x * y;
div = x / y;
printf("the sum is %f \t the sub is %f \t the mul is %f \t the div is %f \t ",sum,sub,mul,div);

    return 0;
}
