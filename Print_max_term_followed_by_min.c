i/p:

1 3 5 2 7 9 8

o/p:

1 3 5 7 9 (explanation: minimum number followed by maximum number)

#include<stdio.h>
int main(){
	int n,temp,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	temp=a[0];
	printf("%d ",a[0]);	
	for(i=1;i<n;i++){
		if(a[i]>temp){
			temp=a[i];
			printf("%d ",a[i]);
		}
	}
	return 0;
}
