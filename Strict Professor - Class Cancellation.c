/*           Strict Professor - Class Cancellation

In a college, a professor is strict and mandates that at least M students out of the total N students must arrive on time to his class. Else he would cancel the class.
The start time of the class is also passed as the input.
The individual arrival time for N students is also passed as input in 24 hour format.
The program must print if the class was cancelled or not.

Input Format:
The first line will contain N and M separated by a space.
The second line will contain the start time of the class.
The third line will contain the arrival time of the N students separated by one or more space(s).

Output Format:
First line will contain either Yes or No (Yes for cancellation of the class and No if the class is not cancelled).
Boundary Conditions:3 <= N <= 502 <= M <= N

Example Input/Output 1:
Input:
5 3
9:30
9:30 9:38 9:31 9:32 9:31

Output:
Yes

Explanation:
4 out of the 5 students arrived late, which means only one arrived on time. As the professor has mandated 3 out of the 5 must arrive on time, the class was cancelled and hence Yes is printed as the output.

Example Input/Output 2:
Input:
6 4
11:10
10:30 10:40 10:55 11:20 11:10 11:12

Output:

No

Input:
9 7
14:10
14:30 13:40 13:55 14:05 15:10 13:12 12:55 13:48 14:09

Output:
No



CODE:               */

#include<stdio.h>
#include <stdlib.h>
/*********************************************************
                Code by YOGESH 
FOR MORE: https://allaboutyogesh.firebaseapp.com
**********************************************************/
struct input
{
    int min,hr;
    int m[50],h[50];
}ip;
int main()
{
int tot,n,min,hr,i,count=0;
scanf("%d%d",&tot,&n);
int h[tot],m[tot];
scanf("%d:%d",&ip.hr,&ip.min);
    for(i=0;i<tot;i++)
    {
        scanf("%d:%d",&ip.h[i],&ip.m[i]);
        if(ip.h>ip.h[i])
        {
            count++;
        }
        else if(ip.h==ip.h[i])
            {
                if(ip.min>=ip.m[i])
                count++;
            printf("m=%d c=%d\n",ip.m[i],count);
            }
    }
    if(count>=n)
        printf("No");
    else 
    printf("Yes");
return 0;

}