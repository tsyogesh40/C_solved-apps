i/p:
1 -2 3 4 -5

o/p:
7 2 3(7 is the sum and 2 is staring index and 3 is ending index)

My solution

#include<stdio.h>
int sum(int a[],int start,int end,int num){
	int i,sum=0;
	for(i=start;i<end;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int max=0,start,i,end,a[50],tmp,num,i1,i2;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	start=0;
	end=num-1;
	for(i=0;i<num;i++){
		tmp=sum(a,start,end,num);
		if(tmp>max){
			max=tmp;
			i1=start;
			i2=end;
		}
	}
	printf("Max sub sequence start from %d to %d",i1,i2);
	return 0;
}

efficient one is

#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
 
    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i+1;
        }
    }
    cout << "Maximum contiguous sum is "
        << max_so_far << endl;
    cout << "Starting index "<< start
        << endl << "Ending index "<< end << endl;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    return 0;
}

//borrowed from geeks for geeks 
