#include<iostream>

using namespace std;

int main(){
	int l[1000]={0};
	int t=0,x,y,n,i,d,j;
	//cout << "123";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
		for(j=x+1;j<=y;j++){
			l[j]=1;
		}
	}
	for(i=0;i<1000;i++){
		t+=l[i];
	}
	cout<<t;
}
