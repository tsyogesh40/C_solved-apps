/*Given a arithmetic series 

i/p:2 4 5 6 8
 here 5 is wrong term in series other number are in difference of 2
 
o/p: 5
*/
#include<stdio.h>
#include<stdlib.h>
int point=0;
void sort(int a[],int n){                                          //bubble sort algorithm to sort the given terms
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i] < a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int find_difference(int a[],int n){                                 //function which finds the difference of given series
	int tdiff,t1=-1,count,max=0,i,j,k=0;
	for(i=0;i<n-1;i++){
		count=0;
		tdiff=a[i+1]-a[i];
		if(tdiff==t1)
			continue;
		for(k=1,j=i+1;j<n;j++,k++){
			if(tdiff*k+a[i]==a[j])
				count++;	
		}
		printf("%d ",count);
		if(count>max){
			point=i;
			max=count;
			t1=tdiff;
		}
	}
	return t1;
}
int main(){
	
  int n=1,i,f=0,*a=(int *)malloc(n*sizeof(int)),difference;
	char c;
	for(i=0;;i++){
		if(scanf("%d%c",&a[i],&c)==2){
			if(c=='\n')
				break;
			else 
				n++;
		}
	}
  
	sort(a,n);
	
  difference=find_difference(a,n);
	
  printf("The difference and index is %d %d\n",difference,point);
	
  if(point>1){                                                      //if the first element is wrong term
		printf("%d",a[0]);
		return 0;
	}
		
	for(i=1;i<n;i++){                                                 //print the wrong term
		if(a[point]+(difference*i)!=a[i]){
			printf("%d",a[i]);
			return 0;
		}		
	}
	printf("-1");
	return 0;
}
