/*Find Locker Status

There are "N" closed lockers numbered 1 to N. A person begins by opening all "N" lockers. Next, he closes every second locker. Then he goes to every third locker and closes it if it is open or opens it if it is closed (toggles the locker open/close status).
 He continues to toggle every "K"th locker on pass number K.He completes his activity when pass N (that is till K equals N) is reached.
The program should print the open/close status of a locker when the locker number L is provided as input. 
The program should print "open" if the locker is open. It should print "closed" is locker is closed.

Input format:
Two string input values will be passed as input.
First string will be N - the number of lockers.
Second string will be L - the number of the locker for which status is to be printed.

Output format:The output is a single line whose value is either "open" or "closed"

Sample Input1:
5  3
Sample Output1:
closed


CODE:
*/
import java.util.*;
public class Hello 
{
    public static void main(String[] args) 
    {
	    Scanner sc=new Scanner(System.in);
	    int n=Integer.parseInt(sc.next());
	    int m=Integer.parseInt(sc.next());    
	    int[] num=new int[n];
	    int c=1,i;
	    while(c<=m)
	    {
	        for(i=c;i<n;i=c*2+i-(c-1))
	        {
	            if(num[i]==1)
	                num[i]=0;
	            else if(num[i]==0)
	                num[i]=1;
	        }
	        c++;
	    }
	    if(num[m-1]==0)
	        System.out.print("open");
	    else if(num[m-1]==1)
	        System.out.print("closed");
    }
}