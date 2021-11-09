#include<stdio.h>

int main(){
	int data[10],i,j,average,max,min;
	double sum=0;
	for(i=0;i<10;i++){
		printf("please input a number");
		scanf("%d",data[i]);
		//scanf("%d",&n);
	}
	for(i=0;i<10;i++){
		sum+=data[i];
		//printf("%d ",data[i]);
	}
	printf("average is %.2f\n",sum/10);
}
