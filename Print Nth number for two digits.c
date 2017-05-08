/*
Print Nth number for two digits
Two digits d1 and d2 will be passed as input.
The program must print the Nth number in the number system that consists only digits with d1 and d2.
Input Format:
The first line contains d1
The second line contains d2
The third line contains N
Boundary Conditions:
0 <= d1 <=9
0 <= d2 <=9
d1 is not equal to d2
Output Format:
The value of the number as per the given conditions.
Example Input/Output 1:
Input:
3
4
2
Output:
43
Explanation:The numbers which contains only 3 and 4 are like 34, 43, 334, 343, 344, 434, ....The second number in this series is 43 and hence it is printed as output

Example Input/Output 2:
Input:
5
0
4
Output:
550
Explanation:The numbers which contains only 0 and 5 are 50 500 505 550 ...The 4th number in this series is 550 and hence it is printed as output.
Example Input/Output 3:
Input:
6
9
1
5
Output:
6999
Explanation:The numbers which contains only 6 and 9 are 69 96 669 696 699 966 969 996 6669 6696 6699 6966 …
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int d1,d2,N, i ,a, b, c=0,max ,m = 0,n=0; 
    scanf ("%d%d%d",&d1,&d2,&N); 
    max =d1>d2?d1:d2;
    for(i=max +1;;i++) 
        {  
            a=i ; 
            while (1)   
            {  
                b=a%10;   
                a=a/10;  
                if (b!=d1 && b!=d2)  
                break ; 
                if (b==d1) 
                m=1; 
                if (b==d2)   
                n=1; 
                if (a==0&&m==1&&n==1)  
                {
                    c++;
                    break ;  
                    }
                    else if(a==0)  
                    break ;    
                    }
                    m=0;  
                    n=0;       
                    if(c==N) 
                    break ; 
            }
            printf("%d",i );  
return 0;  }