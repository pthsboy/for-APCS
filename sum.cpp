#include<iostream>
// 
using namespace std;

int main(){
	int N,M;
	while(cin>>N>>M){
		int a[20][20],max[20]={0},i,n,b=0,c=0,d=0,e=0;
		int out[20]={0};
		//cin>>N>>M;
		for(i=0;i<N;i++){
			for(n=0;n<M;n++){
				cin>>a[i][n];
			}
		}
		for(i=0;i<N;i++){
			for(n=0;n<M;n++){
				if(a[i][n]>b){
					b=a[i][n];
				}
			}
			max[i]=b;
			b=0;
		}
		for(i=0;i<N;i++){
			c+=max[i];
		}
		cout<<c<<endl;
		for(i=0;i<N;i++){
			if(c%max[i]==0){
				//cout<<max[i]<<" ";
				out[e]=max[i];
				d++;
				e++;
			}
		}
		for(i=0;i<e;i++){
			if(out[i+1]==0){
				cout<<out[i]<<endl;
			}
			else
			{
				cout<<out[i]<<" ";
			}
		}
		if(d==0){
			cout<<"-1"<<endl;
		}
	}
}
