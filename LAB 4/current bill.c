#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    float u, x, y, z, n;
    printf("enter the number\n");
    scanf("%f", &n);
     printf("power is %f\n", n);
    printf("enter the unit\n");
    scanf("%f", &u);
    printf("power is %f\n", u);
    if(u>=0 && u<=200) {
        printf("amount is %f \n", u*2.5);
    }
    else if(u>=201 && u<=400) {
            x=u-200;
      printf("amount is %f \n", 250*2.5+100+x*3.5);
    }
    else if(u>=401 && u<=600) {
        y=u-400;
      printf("amount is %f \n", 200*2.5+200*3.5+250+y*4.5);
    }
    else {
        z=u-600;
      printf("amount is %f \n", 200*2.5+200*3.5+200*4.5+450+z*6.5);
    }
    return 0;
}
