#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
char a[100];
gets(a);
for(i=0;a[i]!='\0';i++) {
    if(a[i]>='A' && a[i]<'Z') {
        printf("%c",a[i]+1);
    }
       else if(a[i]>='a' && a[i]<'z') {
        printf("%c",a[i]+1);
    }
        else if(a[i]>='0' && a[i]<'9') {
        printf("%c",a[i]+1);
    }
        else if(a[i]=='Z') {
        printf("A");
    }
            else if(a[i]=='z') {
        printf("a");
    }
        else if(a[i]=='9') {
        printf("0");
    }


        else {
        printf("*");
    }



}


    return 0;
}
