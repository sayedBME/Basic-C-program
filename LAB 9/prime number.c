#include <stdio.h>
int main()
{ int n,t,i,j,x,c;
scanf("%d%d",&n,&t);
for(i=n;i<=t;i++)
     { c=0;
          for(j=1;j<=9;j++)
         {
    x=i%j;
    if(x==0)
    {
        c++;
    }
}
 if(c==1)
        {
            printf("%d\t",i);
        }

}
    return 0;
}
