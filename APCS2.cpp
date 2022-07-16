#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
	char arr[1000];
	cin >> arr;
	int even=0,odd=0;
	
	for(int i=0;i<strlen(arr);i++){
		if(i%2==0){
			odd=arr[i]-'0'+odd;
		}
		else{
			even=arr[i]-'0'+even;
		}
	}
	/*cout << even <<endl;
	cout << odd << endl;*/
	cout << abs(even-odd) << endl;
}
