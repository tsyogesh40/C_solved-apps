/*
         Count the 1s in the binary representation

A positive integer N is passed as the input.
The program must print the number of 1s in the binary representation of N.

Input Format:
First line contains N.

Output Format:
First line contains the count of 1s in the binary representation of N.


Boundary Conditions:

1 <= N <= 9000000000000000000


Example Input/Output 1:

Input:
22

Output:
3

Explanation:

The binary representation of 22 is 10110. There are three 1s in it.


*/
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int i,count=0;
	    Scanner sc=new Scanner(System.in);
	    String num=Long.toBinaryString(sc.nextLong());
	    System.out.println(num);
	    char[] ch=num.toCharArray();
	    for(i=0;i<ch.length;i++)
	        {   
	            if(ch[i]=='1')
	                count++;
	        }
	   System.out.print(count);
	}
}