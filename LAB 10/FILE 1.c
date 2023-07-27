#include <stdio.h>

int main()
{ char c[1000];
FILE *fp;
if ((fp=fopen("program.txt","r"))==NULL)
{
    printf("Error!");
    exit(1);
}
fscanf(fp,"%[^\n]",c);
printf("%s",c);
fclose(fp);

    return 0;
}
