#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,x,y,n=0;
int a[100];
scanf("%d",&y);
for(i=0;i<y;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the chosen number \n");
scanf("%d",&x);
for(i=0;i<y;i++)
{ if(x==a[i])
        {
            n++;
        }
}
 printf("%d\t",n);

    return 0;
}
