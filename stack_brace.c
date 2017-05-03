#include<stdio.h>
#include<string.h>
int main(){
	char a[24],stack[24];
	int n,i,top=0,cnt=0;
	scanf("%s",a);
	n = strlen(a);
	if(n%2==0){
	for(i=0;i<n;i++){
		switch(a[i]){
			case '(':
			case '{':
			case '[':
			case '<':stack[top++]=a[i];break;
			case ')':if(stack[--top]=='('){ cnt++; }break;
			case '}':if(stack[--top]=='{') cnt++; break;
			case ']':if(stack[--top]=='[') cnt++; break;
			case '>':if(stack[--top]=='<') cnt++; break;
			default:break;
		}
	}
	//printf("%s %d %d",stack,cnt,n);
		if(n/2==cnt)
			printf("valid");
		else
			printf("invalid");
	}else
		printf("invalid");
	return 200;	
}
