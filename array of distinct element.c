#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[50],b[50],x,y,i,j,count=0,ele=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(j=0;j<y;j++)
        scanf("%d",&b[j]);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i]!=b[j])
              {  count++;}
              //printf("\na=%d b=%d count=%d",a[i],b[j],count);
                if(count==y)
                    ele++;
        }
      count=0;
    }
    count=0;
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            if(b[i]!=a[j])
                count++;
                //printf("\na=%d b=%d count=%d",b[i],a[j],count);
            if(count==x)
                ele++;
        }
        count=0;
    }
printf("%d",ele);
return 0;
}