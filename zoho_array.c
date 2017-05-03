#include<stdio.h>
void sort(int* a,int n){
//bubble sort
//i/p : *a - array is passed as reference && n -no of terms
	int temp,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i] < a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
int main(){
	int a[10],n,i,cnt_var,l=0,m;// l -> to points the first element in array
	printf("Enter the n terms : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//call sort function to sort the array (! array is passed as reference )
	sort(&a,n);
	//cnt_var -> control variable of the loop
	cnt_var=0;
	//m -> to points the last position in array
	m=n-1;
	//logic is for every even number if stmt is executed
	//odd number -> else stmt is executed
	while(cnt_var < n){
		if((cnt_var%2) == 0){
			printf("%d\t",a[m]);
			m--;
		}else{
			printf("%d\t",a[l]);
			l++;
		}
		cnt_var++;
	}
	return 0;
}
