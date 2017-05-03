#include<stdio.h>
int main(){
	int i,n,liter[10],flag=0,distance[10],cnt,travel,j,k;
	n=4;
	for(i=0;i<n;i++){
		scanf("%d",&liter[i]);
		scanf("%d",&distance[i]);
	}
	for(i=0;i<n;i++){
		cnt=0;
		travel=0;
		for(j=i,k=0;k<=n;k++,j=j%n){
			//j=i from which petrol pump 
			//j%n e.g j=5 5%4=1 to round off to below n
			if(k==n){
				if(cnt==n){printf("\nfeasible from %d",i);
				flag=1;}
				break;
			}
			if(liter[j] > distance[j] || travel!=0){
				travel = travel+liter[j]-distance[j];
				cnt++;
			}else{
				//printf("\nnot feasible from %d",i);
				break;
			}
			j++;
		}
		if(flag)
			break;
	}

//another soluton for above problem is below but it does not satisfy all test case if you have efficient one comment it below

	/*i=0;
	while(1){
		if(cnt==n)
			break;
		i=i%n;
		if(liter[i] > distance[i] || travel != 0){
			printf("pongal : %d\t",i);
			travel=travel+liter[i]-distance[i];
			cnt++;
		}//else{
			
		//}
		
		i++;
	}*/
	return 0;
}
