Task is to find the longest palindrome in given strings

i/p:mango5
appl5e
orange

o/p:
5aegnopapongea5   (priority to number is greater than alphabets)

#include<stdio.h>
#include<string.h>
struct data{
	char alpha;
	int count;
}palin[50];
char *strrev(char str[]){                                     //gcc donot comes with strrev so implement manually
	char *p1,*p2;
	if(!str || !*str)
		return str;
	for(p1=str,p2=str+strlen(str)-1;p2>p1;++p1,--p2){
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}
void sort(char a[]){                                          //sort the given string
	char temp,stri[50],tmp[50];
	int i,j,n=strlen(a),k=0,cnt=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i] < a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//printf("\n%s %d",a,n);
	for(i=0;i<n;i++){                                         //find the alpha and its no of occurance
		if(a[i]==a[i+1]){
			cnt++;
		}else{
			palin[k].alpha=a[i];
			palin[k].count=cnt;
			k++;
			cnt=0;
		}
		
	}
	for(i=0;i<k;i++){
		printf("\nalphabet %c",palin[i].alpha);
		printf("\ncount %d",palin[i].count);
	}
	printf("\n");
	cnt=0;
	for(i=0;i<k;i++){                                     //finding the first half of palindrome
		if(palin[i].count){
			stri[cnt]=palin[i].alpha;
			palin[i].count-=2;
			if(palin[i].count>0)
				i--;
			cnt++;
		}
	}	
	stri[cnt]='\0';
	strcpy(tmp,stri);
	for(i=0;i<k;i++){
		if(palin[i].count>=0){
			printf("%s%c%s",tmp,palin[i].alpha,strrev(stri));             //printing the output
			break;
		}
	}
}
int main(){
	int n,i;
	char a[50]="\0",temp[50];
	//char a[]="apple5";
	//char b[]="man5go";
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",temp);
		strcat(a,temp);
	}
	sort(a);
	return 0;
}
