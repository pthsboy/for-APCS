#include<iostream>

using namespace std;

int main()
{
	int array[10];
	int max=0,i;
	for(i=0;i<10;i++)
	{
		array[i]=i+1;
	}
	for(i=0;i<10;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	cout << max << endl;	//用這種方式即可把時間複雜度從排序的O(n^2)降低到O(n) 
} 
