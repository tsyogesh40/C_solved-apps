Given the co-ordinates of robot and after certain command what is resultant co-ordinates

i/p: 0 0
N5 E8

o/p: 8 5

#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,n=1,f=0,*dis=(int *)malloc(n*sizeof(int)),i;
	scanf("%d%d",&x,&y);
	char a,c;
	for(i=0;;i++){							//trick to get values dynamically
		if(scanf("%c%d%c",&a,&dis[i],&c)==3){
			if(c=='\n'){					//check if the i/p is completed 
				f=1;
			}
			else{
				n++;
			}
				if(a=='S')
					y-=dis[i];
				if(a=='N')
					y+=dis[i];
				if(a=='W')
					x-=dis[i];
				if(a=='E')
					x+=dis[i];
				if(f==1)
					break;
		}

	}
	printf("%d %d",x,y);
	return 0;
}
