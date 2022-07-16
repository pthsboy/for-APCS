#include<iostream>

using namespace std;

int rec(int *friends,int *flags,int i)
{
	if(flags[i]==1)
	{
		return 0;
	}
	else
	{
		flags[i]=1;
		rec(friends,flags,friends[i]);
	}
}


int main()
{
	int N;
	while(cin >> N)
	{
		int friends[N],flags[N]={0},count=0;
		for(int n=0;n<N;n++)
		{
			cin >> friends[n];
		}
		for(int i=0;i<N;i++)
		{
			if(flags[i]==0)
			{
				rec(friends,flags,i);
				count++;
			}
		}
		cout << count << endl;
	}
}
