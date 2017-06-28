/*   Print Numbers - Frequency Based 

An array of N positive integers is passed as input. The program must print the numbers in the array based on the frequency of their occurrence. The highest frequency numbers appear first in the output.

Note: If two numbers have the same frequency of occurrence (repetition) print the smaller number first.

Input Format:
The first line contains N
The second line contains the N positive integers, each separated by a space.

Output Format:
The first line contains the numbers ordered by the frequency of their occurrence as described above.

Boundary Conditions: 1 <= N <= 1000

Example Input/Output 1:

Input:
10
 1 3 4 4 5 5 1 1 2 1

 Output:
1 4 5 2 3

Example Input/Output 2:

Output:
7 9 13 22 1 12 21 100

Example Input/Output 3:

Input:
5
11 11 11 11 11

Output:
11
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
int n,i,x[100000];
cin>>n;
int arr[n],ar[n],k=0;
   memset(x,0,sizeof(x));
    for(i=0;i<n;i++)
            cin>>arr[i];
                    sort(arr,arr+n);
                    
    for(i=0;i<n;i++)
            x[arr[i]]++;
                
                for(i=0;i<n-1;i++)
                    if(arr[i]!=arr[i+1])
                        ar[k++]=arr[i];
                            ar[k++]=arr[n-1];
        
        int temp,temp1,j,t,t1,count[k];
    for(i=0;i<k;i++)
        count[i]=x[ar[i]];
        cout<<"before sorting :\n"
    cout<<"ele=\n";
    for(i=0;i<k;i++)
    {
        cout<<ar[i]<<" ";
    }               
    cout<<"\ncount=\n";
     for(i=0;i<k;i++)
    {
        cout<<count[i]<<" ";
    }    
   
    for(i=0;i<k-1;i++)
        {
            for(j=0;j<k-i-1;j++)
                {
                    if(count[j]<count[j+1])
                    {
                        temp=count[j];
                        count[j]=count[j+1];
                        count[j+1]=temp;
                        temp1=ar[j];
                        ar[j]=ar[j+1];
                        ar[j+1]=temp1;
                    }
                   else if(count[j]==count[j+1])
                        {
                            if(ar[j]>ar[j+1])
                            {
                                t=count[j];
                                count[j]=count[j+1];
                                count[j+1]=t;
                                t1=ar[j];
                                ar[j]=ar[j+1];
                                ar[j+1]=t1;
                            
                            }
                        }
                }
        }
    cout<<"\nAfter Sorting\n";
    cout<<"ele=\n";
    for(i=0;i<k;i++)
    {
        cout<<ar[i]<<" ";
    }               
    cout<<"\ncount=\n";
     for(i=0;i<k;i++)
    {
        cout<<count[i]<<" ";
    }    
   
}