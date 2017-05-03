i/p:
1 2 3 4 5 6
2

o/p:
1 5 3 4 2 6 (swap the second position)

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void display(int num[],int n){
    int i;
    for(i=0;i<n;i++)
    printf("%d ",num[i]);
}
int main()
{
    char a[100],b[5],*front;
    int num[50],n=0,temp;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    int swap=atoi(b);
    front=strtok(a," ");
    
    while(front!=NULL){
        num[n]=atoi(front);
        front=strtok(NULL," ");
        n++;
    }
    
    printf("%d %d",swap-1,(n-swap));
    temp=num[swap-1];
    num[swap-1]=num[n-swap];              //swap the nth number 
    num[n-swap]=temp;
    display(num,n);
    return 0;
}
