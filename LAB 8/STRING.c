#include <stdio.h>
#include <stdlib.h>

int main()
{ char str1[30],str2[30],str3[30];
int x,a,b,c;
gets(str1);
gets(str2);
x=strcmp(str1,str2);
if(x=0)
{
    printf("they are equal");
     strcpy(str3,str1);
     puts(str3);
     a=strlen(str1);
   printf("length %d\n",a);
     b=strlen(str2);
     printf("length %d\n",b);
     c=strlen(str3);
     printf("length %d\n",c);
}
else

{
    printf("they are not equal");
    strcat(str1,str2);
    puts(str1);
      strcpy(str3,str1);
     puts(str3);
     a=strlen(str1);
   printf("length %d\n",a);
     b=strlen(str2);
     printf("length %d\n",b);
     c=strlen(str3);
     printf("length %d\n",c);

}


    return 0;
}
