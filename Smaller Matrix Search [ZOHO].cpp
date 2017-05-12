/*Smaller Matrix Search [ZOHO]

A bigger NxN matrix is passed as the input. Also a smaller MxM matrix is passed as input.
 The program must print TRUE if the smaller matrix can be found in the bigger matrix.
 Else the program must print FALSE.

Input Format:

First line will contain the value of N.
Second line will contain the value of M.
Next N lines will contain the values in the N*N matrix with each value separated by one or more space.
Next M lines will contain the values in the M*M matrix with each value separated by one or more space.

Output Format:

First line will contain the string value TRUE or FALSE

Boundary Conditions:
3 <= N <= 202 <= M <= N

Example Input/Output 1:

Input:
3
2
4 5 9
1 3 5
8 2 4
3 5
2 4

Output:
TRUE

Example Input/Output 2:
Input:
3
2
4 5 9
1 3 5
8 2 4
4 5
1 4

Output:
FALSE
*/


CODE:

#include <iostream>
using namespace std;
/* 
***********************************************************
                A CODE BY YOGESH 
    FOR MORE:  https://allaboutyogesh.firebaseapp.com
***********************************************************
*/
int main(int argc, char** argv)
{
    int i,j,x=0,y=0,count=0;
    int n,m,flag=0;
    cin>>n>>m;
    int a[n][n],b[m][m];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            cin>>b[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[x][y])
            {
                count++;
       
                if(y<m)
                    y++;
                if(y>=m)
                    {
                        x++;
                        y=0;
                    }
                if(count==m*m)
                    flag=1;
                
            }
        }
    }    
        
    if(flag==1)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}