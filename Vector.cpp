#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>vec;
	//vec[0];
	//vector<int>::iterator it;
	for(int i=1;i<=10;i++)
	{
		vec.push_back(i);
	}
	//vec.clear();
	reverse(vec.begin(),vec.end());
	sort(vec.begin(),vec.end());
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
	{
		cout << *it << endl; 
	}
	//vec.clear();
}
