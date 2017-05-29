#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==(n-1-i))
				printf("%c",str[n-i-1]);
			else if(j==i)
				printf("%c",str[j]);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}