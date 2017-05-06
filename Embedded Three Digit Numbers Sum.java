/* package codechef; // don't place package name! */

import java.util.*;
import java.util.Scanner;
import java.util.Arrays;
import java.lang.*;
import java.lang.Number;
import java.lang.Integer;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class yogesh
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	        String str=sc.next();
            int i=0,no,sum=0;
	       String[] arr=str.split("[a-zA-z]"); 
	      // String[] arr=str.split(""); 
	        int[] num=new int[100];
	         for(String y:arr)
	         {
	             try
                 { 
                             no= Integer.parseInt(y);
                     }
                 catch(Exception ex) 
                 {
                     no=0; 
                 }
	             if(no>99&&no<1000)
	                sum+=no;
	         }
	       System.out.println(sum);
	}
}
