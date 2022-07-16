#include<iostream>

using namespace std;

int main(){
	int i,n,m=0;
	while(cin>>n){
	int f[n];
	for(i=0;i<n;i++){
		cin>>f[i];
	}
	for(i=0;i<n;i++){
		if(i-1<0&&f[i]==0){
			m+=f[i+1];
		}
		if(i+1>=n&&f[i]==0){
			m+=f[i-1];
		}
		if(f[i]==0&&f[i+1]>f[i-1]){
			m+=f[i-1];
		}
		else if(f[i]==0&&f[i+1]<f[i-1]){
			m+=f[i+1];
		}
	}
	cout<<m<<endl;
	m=0;
	}
} 
