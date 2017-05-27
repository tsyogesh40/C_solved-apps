/*                                             Tower Line of Sight


IssueFour towers A, B, C, D are to be erected.
Tower A is to communicate with tower C.
Tower B is to communicate with tower D.

Line of sight issue can occur under the following conditions-
 when tower B or D is in the straight line connecting A and C-
 when tower A or C is in the straight line connecting B and D

The program must accept the co-ordinates of all four towers and print yes or no depending on whether Line of sight issue will occur or not.

Input Format:

The first line will contain X and Y co-ordinates of tower A separated by a space.
The second line will contain X and Y co-ordinates of tower B separated by a space.
The third line will contain X and Y co-ordinates of tower C separated by a space.
The fourth line will contain X and Y co-ordinates of tower D separated by a space

Output Format:The first line will contain yes or no (smaller case)

Boundary Conditions:The value of the co-ordinates will be from -500 to 500.

Example Input/Output 1:
0 0
0 -2
2 0
0 2

Output:
yes

Example Input/Output 2:

Input:
0 0
0 -2
2 0
0 -5

Output:

no


Code:*/

#include<stdio.h>
#include <stdlib.h>
#include<math.h>
//Code by Yogesh
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,flag=0;
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);
    scanf("%d %d",&cx,&cy);
    scanf("%d %d",&dx,&dy);
    if(ax==cx)
    {
        if(bx==ax)
            if((by>=ay&&by<=cy)||(by>=cy&&by<=ay))
                flag=1;
        else if(dx==ax)
            if((dy>=ay&&dy<=cy)||(dy>=cy&&dy<=ay))
                flag=1;
    }
    else if(ay==cy)
        {
            if(by==ay)
                if((bx>=ax&&bx<=cx)||(bx>=cx&&bx<=ax))
                        flag=1;
            else if(dy==ay)
                if((dx>=ax&&dx<=cx)||(dx>=cx&&dx<=ax))
                    flag=1;
        }
    if(bx==dx)
    {
        if(ax==bx)
            if((ay>=by&&ay<=dy)||(ay>=dy&&ay<=by))
                    flag=1;
        else if(cx==ax)
            if((cy>=by&&cy<=dy)||(cy>=dy&&cy<=by))
                flag=1;
    }
    else if(cy==ay)
        {
            if(ay==by)
                if((ax>=bx&&ax<=dx)||(ax>=dx&&ax<=bx))
                    flag=1;
            else if(cy==ay)
                if((cx>=bx&&cx<=dx)||(cx>=dx&&cx<=bx))
                    flag=1;
        }
        if(flag==1)
            printf("yes");
        else
            printf("no");
return 0;

}
