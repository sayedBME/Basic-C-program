#include <stdio.h>
#include <stdlib.h>

int main()
{ int arr[1000];
int x,y,i,j=0,k=0;
printf("enter the array size \t");
scanf("%d",&y);
printf("enter the chosen number \t");
scanf("%d",&x);
for(i=0;i<y;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<y;i++)
{ k++;;
    if(x==arr[i])
    {
        printf("yes\n");
        printf("arr[%d]\n",k);
 j=1;
    }

}
if(j==0)
    printf("No\n");
    return 0;
}
