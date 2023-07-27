#include <stdio.h>
#include <stdlib.h>

int main()
{ int i, n, max, min;
int arr[100];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}
max=arr[0];
for(i=1;i<n;i++)
{
    if(max<arr[i])
        max=arr[i];
}
printf("%d is largest number of array", max);

min=arr[0];
for(i=1;i<n;i++) {
    if(min>arr[i])
        min=arr[i];
}
printf("\n%d is lower number of array",min);
    return 0;
}
