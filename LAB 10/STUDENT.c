#include <stdio.h>
struct stud
{
    char name;
    int age;
}s[3];

int main()
{
int i,sum=0;
float avg;
for(i=0;i<=3;i++)
{ printf("Enter the name\n");
  scanf("%s",&s[i].name);
  printf("enter age\n");

  scanf("%d",&s[i].age);
}

for(i=0;i<=3;i++)
{
  printf("%s\n",s[i].name);
  printf("%d\n",s[i].age);
}
for(i=0;i<=3;i++)
{
  sum=sum+s[i].age;
}
avg= (float) sum/4;

printf("%f",avg);
return 0;
}
