rotate numbers 180 degree 

eg:
69 is 96
100 is 100

check whether give number is fancy or not

//this is can solved my below method or simply way is to use the map concept in c++ or java and check like palindrome

#include<stdio.h>
int main(){
	int num,temp,dig,final=0;
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		dig=temp%10;
		switch(dig){
			case 0:
			case 1:
			case 8:final=final*10+dig;break;
			case 6:final=final*10+9;break;
			case 9:final=final*10+6;break;
			default: printf("Not fancy Number");return -1;
		}
		temp=temp/10;
	}
	if(final==num)
		printf("Fancy Number");
	else
		printf("Not fancy number %d",final);
	return 0;
}
