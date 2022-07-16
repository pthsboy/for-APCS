#include<iostream>

using namespace std;

int main(){
	int n,D;
	cin>> n >> D;
	int a[n],b[n];
	int i,j,m,t=1,x=0;
	int total=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		b[i]=0;
	}
	m=a[0];
	for(j=0;j<n;j++){
		if(m+D<=a[j+1]&&t==1){
			b[j]=a[j+1]-m;
			t=0;
			x=a[j+1];
			m=0;
		}
		else if(x-10>a[j+1]&&t==0){
			m=a[j+1];
			t=1;
		}
	}
	for(i=0;i<n;i++){
		total+=b[i];
		//cout<<b[i];
	}
	cout<<total;
	
	
}
