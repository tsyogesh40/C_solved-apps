#include<stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,n,y=1,x=1;
  scanf("%d",&n);
  int z,a=0,k=0;
 for(i=n;i>0;i--){
     z=n;
     k=y;
    printf("%d ",y);
 for(j=1;j<i;j++)
    {
        if(j>0)
        {
         a+=k+2+j;
         printf("%d ",a);
        }
        z--;
     k=0;
    }
     printf("\n");
     
     k=y++;
     a=0;
     }

    return 0; 

}
