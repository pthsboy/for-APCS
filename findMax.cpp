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
	cout << max << endl;	//�γo�ؤ覡�Y�i��ɶ������ױq�ƧǪ�O(n^2)���C��O(n) 
} 
