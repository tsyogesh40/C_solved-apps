/*

A N*N matrix having N rows and N columns containing + or * for it's cell values is passed as the input.
 Two strings S1 and S2 are also passed as input. 
The program must search for * in a straight line (either left to right or top to bottom) and replace them with strings S1 and S2.
Input Format:
The first line will contain the value of N.The next N lines will contain the values for N rows having +  and  * representing the cell values of the matrix.The last two lines will contain the value of the two strings S1 and S2 respectively.

Output Format:
N lines with the matrix cell values containing * replaced by the characters in the string values S1 and S2.Constraints:4 <= N <= 100Length of S1 and S2 is from 2 to N.

Example
 Input/Output1:
Input:
10
++++++++++
++++++++++
+++*++++++
+++*++++++
+++***++++
+++*++++++
+++*++++++
+++*++++++
++++++++++
++++++++++
MANAGE
NEW

Output:
++++++++++
++++++++++
+++M++++++
+++A++++++
+++NEW++++
+++A++++++
+++G++++++
+++E++++++
++++++++++
++++++++++
Example 
Input/Output2:
Input:
6
++++++
++*+++
++****
++*+++
++*+++
++++++
LION
IRON

Output:
++++++
++L+++
++IRON
++O+++
++N+++
++++++ 
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
int n,i,j,len=0;
char str[100],str1[100],sym[100][100];
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cin>>sym[i][j];
        }}
   cin>>str;cin>>str1;
   
 //  cout<<str;
  // cout<<strlen(str1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              if(sym[i][j]=='*')
                    {
                     //   star++;
                    
                   //  cout<<str[len];
                       if(str[len]==str1[0])
                            {
                                cout<<str1;
                                j=j+strlen(str1)-1;
                                len++;
                            }
                            
                        else
                        {
                            cout<<str[len++];
                        }
                    }                
                else
              cout<<sym[i][j];
            }
            cout<<"\n";
        }
return 0;
}