#include<stdio.h>
#include <stdlib.h>

int main(void)
{
int i,j,n,x=1,y=1;
scanf("%d",&n);
int z,a=0,k=0;
for(i=n;i>0;i--)
    {
        z=n;
        k=y;
        printf("%d ",y);
    for(j=1;j<i;j++)
            {   
                if(j>0)
                    a+=k+z;
                    printf("%d ",a);
                z--;
                k=0;
            }
    printf("\n");
    k=y++;
    a=0;
    }
return 0;
}