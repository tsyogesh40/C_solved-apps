/*
 Minimum Distance Between Words [AMAZON]

A string S is passed as the input. Two words W1 and W2 which are present in the string S are also passed as the input.
 The program must find the minimum distance D between W1 and W2 in S (in forward or reverse order) and print D as the output.

Input Format:
The first line will contain S.
The second line will contain W1.
The third line will contain W2.

Output Format:
The first line will contain D - the minimum distance between W1 and W2 in S.

Boundary Conditions:
Length of S is from 5 to 200.

Example Input/Output 1:
Input:
the brown quick frog quick the
the
quick

Output:
1
Explanation:
quick and the are adjacent as the last two words.
 Hence distance between them is 1.

Example Input/Output 2:

Input:
the quick the brown quick brown the frog
quick
frog
Output:
3
*/
import java.util.*;
class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
        String[] ip=str.split("[ ]");
        String src=sc.next();
        String dest=sc.next();
		int i,index1=-1,index2=-1,j;
		int min=Integer.MAX_VALUE,temp=0;
		for(i=0;i<ip.length;i++)
		{
		    if(src.equals(dest))
		    {
		        if(ip[i].equals(src))
		        {
		            index1=i;
		            for(j=index1+1;j<ip.length;j++)
		            {
		               if(ip[j].equals(dest))
		                  {  index2=j;
		                    //System.out.println("ipi= "+ip[i]+" "+index1+"ipj= "+ip[j]+" "+index2);
		                    break;}
		                    else
		                    {
		                        index2=0;break;
		                    }
		            }
		        }
		             if(index1!=-1&&index2!=-1)
		            {
		            temp=(int)Math.abs(index1-index2);
		            //System.out.println("temp= "+temp+"min= "+min);
		                if(temp<min)
		                if(temp>0)
		                    min=temp;
		            }
		            
		        
		    }
		    else
		    {
		         if(ip[i].equals(src))
		                index1=i;
		          if(ip[i].equals(dest))
		                 index2=i;
		            if(index1!=-1&&index2!=-1)
		                {
		                temp=(int)Math.abs(index1-index2);
		                if(temp<min)
		                    min=temp;
		                }
		    }
		}
		System.out.print(min);
	}
}