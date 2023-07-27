#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
char inp[300],ch;

gets(inp);
for(i=0;inp[i]!='\0';i++) {
if(inp[i]>'A' && inp[i]<'Z') {
    printf("%s",tolower(inp[i])); }
else if(inp[i]>'a' && inp[i]<'z')
 {

  printf("%s",toupper(inp[i])); }
}

    return 0;
}
