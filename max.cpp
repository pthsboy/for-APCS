#include<stdio.h>

int *max(int *a, int *b)
{
	if(*a>*b)
		return a;
	else
		return b;
}

int main(){
	int x,y;
	int *p;
	
	scanf(" %d %d", &x, &y);
	p=max(&x, &y);
	printf("%d\n", *p);
	
	*max(&x, &y)=100;
	printf("%d %d\n",x,y);
}
