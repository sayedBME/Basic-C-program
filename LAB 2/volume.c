#include <stdio.h>
#include <stdlib.h>

int main()
{ float r,h,volume_sphere,volume_cylinder;
printf("Enter the value of r");
scanf("%f",&r);
printf("Enter the of h");
scanf("%f",&h);
volume_sphere = 4/3*3.1416*r*r*r;
volume_cylinder = 3.1416*r*r*h;
printf("the volume of sphere is %f \nthe volume of cylinder is %f\n",volume_sphere,volume_cylinder);
getch();
    return 0;
}
