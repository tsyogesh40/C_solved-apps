This is grand son problem asked in challenges

i/p
a,b
b,c
d,b
c

o/p:
2

first -> son
second -> father

task: 
find grand son of the given people

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct family{
char son[50];
char father[50];
};
int count=0;
void find_the_count(struct family members[],char key[],int n){
int i;
for(i=0;i<n;i++){
if(strcmp(members[i].father,key)==0){                 /// check it is grandson or not
count++;
}
}
}
int main()
{
int n,i;
char find_grandson[50],temp[100],*token;
scanf("%d",&n);
struct family members[n];
for(i=0;i<n;i++){
scanf("%s",temp);
token=strtok(temp,",");                           //this loop seperate the son and father (from comma(,))
sscanf(token,"%s",&members[i].son);
token=strtok(NULL,",");
sscanf(token,"%s",&members[i].father);
}
scanf("%s",&find_grandson);
for(i=0;i<n;i++){
if(strcmp(members[i].father,find_grandson)==0){
find_the_count(members,members[i].son,n);
}
}
printf("%d",count);
return 0;
}

