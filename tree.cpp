#include<iostream>

using namespace stdl

int main()
{
	int SIZE=100000;
	int n,k[SIZE]={0},parent[SIZE]={0};
	cin >> n;
	int node_n;
	for(int i=1;i<=n;i++)
	{
		cin >> k[i];
		for(int j=0;j<k[i];j++)
		{
			cin >> node_n;
			parent[node_n]=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(parent[i]==0)
		{
			cout << i << endl; 
		}
	}
	//------------------------------------------------------------------------
	int len;
	int node;
	int height[SIZE]={0};
	for(int i=1;i<=n;i++)
	{
		if(k[i]==0)
		{
			len=0;
			node=parent[i];
			while(node!=0)
			{
				len++;
				if(len>height[node])
				{
					height[node]=len;
				}
				node=parent[node];
			}
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=height[i];
	}
	cout << sum << endl;
}
