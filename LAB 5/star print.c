#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, j, x, y, z, a, b, c, r, n;
 scanf("%d%d%d%d%d", &x,&y,&z,&a,&b);
 for(i=1;i<=x;i++)
 {
     for(j=1;j<=y;j++) {
          printf("*");
     }
 for(c=1;c<=z;c++) {
    printf("-");
 }
printf("\n");
 }
 for(r=1;r<=a;r++) {
    for(n=1;n<=b;n++) {
        printf("-");
    }
    printf("\n");
 }
    return 0;
}
