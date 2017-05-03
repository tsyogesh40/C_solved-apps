/*
Question

A kids game has a board with an M*N matrix having M rows and N columns containing non-negative integer values as cell values. The kid can start from the first column of any row and can perform the following three navigations after collecting the points in that cell.
- He can move to the right cell.
- He can move to the top right cell.
- He can move to the bottom right cell.

The kid cannot come back to a previous column. He navigates until he reaches the last column of the matrix and collects the points in each cell. The program must print the maximum points a kid can collect for the given matrix while navigating.

Input Format:
The first line will contain the value of M and N separated by a space.
The next M lines will contain the values for N columns with the non-negative integer values separated by a space.

Output Format:
The integer value of the maximum points that can be collected.

Constraints:
2 <= M,N <= 30

Example Input/Output 1:
Input:
3 3
5 3 3
2 1 4
0 9 4

Output:
15

Explanation:
The maximum points can be collected by navigating 2->9->4 and hence the sum is 2+9+4 = 15.


Example Input/Output 2:
Input:
4 4
1 3 1 5
2 2 4 1
5 0 2 3
0 6 1 2

Output:
16

Explanation:
The maximum points 16 can be collected by navigating 5->6->2->3 or 5->2->4->5.

*/

#include<stdio.h>
int main(){
	int n,k,i,j,sum=0,tsum,tmpi;
	scanf("%d",&n);
	int a[n][n]; //get the values
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		tsum=a[i][0];
		tmpi=i;
		k=(i!=n-1)?i+1:i-1;  // check whether i reached n value if not n+1 else n-1
		for(j=1;j<n;j++){
			
				int h=tmpi-1;  // temporary for i to get score above the current row
				if(h<0) 
					h=0;
				if(a[h][j]>=a[tmpi][j] && a[h][j]>=a[k][j]){  // check whether the nearby score is maximum
					tsum+=a[h][j];                              // increment the score
					tmpi=tmpi-1;                                // change the path to highest score 
 				}else if(a[i][j] >= a[k][j]){                 // same as above
					tsum+=a[tmpi][j];
				}else{
					tsum+=a[k][j];
					tmpi=k;
				}
			
		}
		if(tsum>sum)                                      // get the maximum score and save it in sum
			sum=tsum;
	}
	printf("%d",sum);
	return 0;
}
