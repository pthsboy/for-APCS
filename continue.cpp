#include<stdio.h>


int main(){
	int n,sum=0;
	for(;;){
		printf("Please input a number (0 for quit):");
		scanf("%d",&n);
		if(n==0)
			break;
		if(n<0)
			continue;
		sum+=n;	
	}
	printf("sum=%d.\n",sum);
}
