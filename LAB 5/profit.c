#include<stdio.h>
int main()
{
float month,Money,i,p,z,j;
printf("Enter money\t interest \tmonth: \t");
scanf("%f%f%f",&Money,&i,&month);
z=Money;
for(j=1;j<=month;j++)
{
p=i*Money/1200;
Money=Money+p;
printf("Month=%f   profit=%f   Total=%f\n",j,p,Money);
Money=z+Money;
       }
return 0;
}
