#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int i;
	queue<int>Q;
	for(i=1;i<=10;i++)
	{
		Q.push(i);
	}
	while(Q.empty()!=1)
	{
		cout << Q.front() << endl;
		Q.pop();
	}
}
