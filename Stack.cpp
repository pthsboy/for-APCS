#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int i;
	stack<int>S;
	for(i=1;i<=10;i++)
	{
		S.push(i);
	}
	while(S.empty()!=1)
	{
		cout << S.top() << endl;
		S.pop();
	}
} 
