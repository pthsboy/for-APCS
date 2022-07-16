#include<stdio.h>

int main()
{
	//int len=20;
	char name[21];
	printf("Please input your name:");
	fgets(name,10,stdin); 
	printf("Your name is %s.\n",name);
}
