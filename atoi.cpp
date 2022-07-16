#include<stdio.h>
#include<stdlib.h>
#include<string>
int main(){
	char str[10];
	int sum;
	while(1){
		scanf("%s",str);
		sum=sum+atoi(str);
		if(getchar()== '\n')
		{
			break;
		}
	}
	printf("Sum= %d\n",sum);
	
}
