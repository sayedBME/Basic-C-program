#include <stdio.h>
#include <stdlib.h>

int main()
{int m, p, c, sum, add;
    printf("Enter three marks\n");
    scanf("%d%d%d",&m, &p, &c);
    sum=m+p+c;
    add=m+p;
    if((add >= 150) || (m >= 60 && p >= 50 && c >= 40 && sum >= 200))
    {
        printf("eligible candidates\n");
    }
    else
    {
        printf("not eligible\n");
    }

    return 0;
}
