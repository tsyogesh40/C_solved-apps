/*        Chars To Remove For Same String Value

N string values S1, S2, S3, SN are passed as input to the program. 
Values of S1, S2, S3, SN are such that if one character is removed from each of these string values, then the resulting string values are equal (same).
The characters to be removed from the string values named C1, C2, C3, CN  will be different for each string.

Input Format:
The first line will contain the value of N.
The next N lines will contain the values of strings S1 to SN.

Boundary Conditions:
2 <= N <= 10
Length of string SN is from 2 to 200

Output Format:
The first line will contain the characters C1, C2, C3, .. CN to be removed from each of these string without any space between them.

Example Input/Output 1:

Input:
2
bmanabgerb
manasgsesr

Output:
bs

Explanation:
If the character b is removed from the first string, it becomes manager.If the character s is removed from the second string, it becomes manager.Hence bs is printed as output.

Example Input/Output 2:
Input:
5
abcdef
ambcde
qabcdqe
kkakbkckdke
zabczdzzze

Output:

fmqkz


*/
import java.util.*;
class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str,temp,res="";
        int n,i,j,k,flag=0,flag1=0,x,y;
        n=sc.nextInt();
        str=sc.next();
        Set<Character> charSet = new LinkedHashSet<Character>();
        char ch[]=str.toCharArray();
        char ch1[]=new char[200];
        for(i=1;i<n;i++)
        {
            temp=sc.next();
            ch1=temp.toCharArray();
           for(j=0;j<ch.length;j++)
            {
                for(k=0;k<ch1.length;k++)
                {
                   if(ch[j]==ch1[k])
                        flag=1;
                }
                if(flag==0)
                        res=res+ch[j];
                     flag=0;    
            }
            
            for(x=0;x<ch1.length;x++)
            {
                for(y=0;y<ch.length;y++)
                {
                     if(ch1[x]==ch[y])
                        flag1=1;
                }
                if(flag1==0)
                    res=res+ch1[x];
                    flag1=0;
            }
        }
        for (char c : res.toCharArray()) {
            charSet.add(c);
            }
        StringBuilder sb = new StringBuilder();
            for (Character character : charSet) {
                     sb.append(character);
                        }
                System.out.println(sb.toString());
	}
}