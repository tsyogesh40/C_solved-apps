/*             Alternate letters in uppercase

A str‌ing (only alphabets) is passed as input.
The printed output should contain alphabets in odd positions in each word in uppercase and alphabets in even positions in a word in lowercase.

Example input and output:

If the input is 'tREE GiVES us fruiTS', the output should be 'TrEe GiVeS Us FrUiTs

'If the input is 'FLoweR iS beauTIFUL', the output should be 'FlOwEr Is BeAuTiFuL'


CODE:

*/
import java.util.*;
class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		String[] inp=str.split("[ ]");
		char[] ch=new char[str.length()];
		int i,j;
		for(i=0;i<inp.length;i++)
		{
		    ch=inp[i].toCharArray(); 
		   for(j=0;j<ch.length;j++)
		   {
		       if(j%2==0)
		        System.out.print(Character.toUpperCase(ch[j]));
		        else if(j%2==1)
		        System.out.print(Character.toLowerCase(ch[j]));
		   }
		   System.out.print(" ");
		}
	
	}
}