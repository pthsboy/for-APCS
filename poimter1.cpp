#include<stdio.h>

int main(){
	int x;
	int *p; 
	printf("please input a value of x");
	scanf("%d",&x);
	//printf("%d",&x);
	p=&x;
	printf("x=%d\n",x);
	printf("&x=%p\n",&x);
	printf("p=%p\n",p);
	printf("&p=%p\n",&p);
	printf("*p=%d\n",*p);
}
