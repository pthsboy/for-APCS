#include<iostream>
#include<map>

using namespace std;

int main()
{
	int n=10;
	map<string,char>mymap;
	char c;
	while(n--)
	{
		cin >> c;
		switch(c)
		{
			case 'b':
				mymap["Bob"]++;
				break;
			case 'p':
				mymap["plokm"]++;
				break;	
		}
	}
	for(map<string,int>::iterator it=mymap.begin();it!=mymap.end();it++)
	{
		cout << it-> first << " ";
		cout << it-> second << endl;
	}
}
