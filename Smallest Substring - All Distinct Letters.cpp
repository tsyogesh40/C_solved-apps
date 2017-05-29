/*         Smallest Substring - All Distinct Letters

A string value S containing only alphabets (both lower and upper case) is passed as input to the program. The program must print the size of the smallest substring which contains all the distinct alphabets in the string S.

Input Format:
First line contains S.

Output Format:
First line contains the size of the smallest substring which contains all the distinct characters in the string S.

Boundary Conditions:
1 <= Length of string S <= 1000

Note:
a and A (lower and upper case letters are considered different). Hence the string aAaaA contains 2 distinct alphabets.

Example Input/Output 1:
Input:
abcdfffccbbfeaad

Output:
8

Explanation:
The smallest sub string that contains all the distinct letters is cbbfeaad whose length is 8.

Example Input/Output 2:
Input:
klLDKFFKpPoOGAFSGxxkllhaJSHJAlqadyASFLHJASHFA

Output:
32

Explanation:
The smallest sub string that contains all the distinct letters is LDKFFKpPoOGAFSGxxkllhaJSHJAlqady whose length is 32.
*/
//Code 1:- Java

import java.util.*;
public class Hello {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int minCount=Integer.MAX_VALUE;
        String word = sc.nextLine();
        Set<Character> set = new HashSet<Character>();
        for(int i=0;i<word.length();i++)
           set.add(word.charAt(i));
        ArrayList<Character> list = new ArrayList<Character>();
        for(int i=0;i<word.length();i++)
        {
            list.clear();
            for(int j=i;j<word.length();j++)
            {
                list.add(word.charAt(j));
                if(list.containsAll(set)&&list.size()<minCount)
                   minCount=list.size();
                else if(list.size()>=minCount)
                break;
            }
        }
             System.out.println(minCount);
    }
}

//Code 2: - Cpp

#include<bits/stdc++.h>
int main(){
    std::string s;
    std::cin>>s;
    int a[59],count = 0,out=INT_MAX;
    memset(a,0,sizeof(a));
    int i=0,j=0;
    for(i=0;i<s.size();i++){
        if(a[s[i]-'A']==0) {count++;a[s[i]-'A']=-1;}
    }
    std::set<char>str;
    i = 0,j=0;
    while(j<s.size()){
        a[s[j]-'A']++;
        str.insert(s[j]);
        if(str.size()==count){
            while(a[s[i]-'A']!=0){
                a[s[i]-'A']--;
                i++;
            }
            out = std::min(j-i+1,out);
        }
        j++;
    }
    std::cout<<out;
    return 0;
}

//Code: 3 - python

string=str(input().strip())
l=[]
for i in range(len(string)):
    if string[i] not in l:
        l.append(string[i])
minima=9999
for i in range(len(string)):
    l2=[]+l[:]
    k=-1
    for j in range(i,len(string)):
        if string[j] in l2:
            l2.remove(string[j])
        if l2==[]:
            k=j
            break
    if k!=-1:
        temp=k-i
        if temp<minima:
            minima=temp
print(minima+1)
             