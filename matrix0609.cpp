#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int s,t,n,m,r;
	cin>>s>>t>>n>>m>>r;
	int a[s][t],b[n][m];
	int i,j;
	int x,y;
	int dist=0,total=0;
	int sum=0,Sum=0,differ=10000;
	for(i=0;i<s;i++){
		for(j=0;j<t;j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	/*
	//------------------------------
	for(x=0;x<s;x++){
			for(y=0;y<t;y++){
				if(b[x+1][y+1]!=a[x][y]){
					cout << b[x][y];
				}
				//Sum+=b[x+i][y+j];
	}
	*/
	//--------------------------------
	for(i=0;i<n-s+1;i++){
		for(j=0;j<m-t+1;j++){
			dist=0;
			Sum=0;
			for(x=0;x<s;x++){
				for(y=0;y<t;y++){
					if(b[x+i][y+j]!=a[x][y]){
						dist++;
					}
					Sum+=b[x+i][y+j];
				}
			}
			//cout << dist <<endl;
			if(dist<=r){
				//cout << "452425";
				total++;
				if(abs(Sum-sum)<differ){
					differ=abs(Sum-sum);
				}
				
			}
		}
	}
	cout<<total<<endl;
	if(total==0){
		cout<<-1;
	}
	else{
		cout<<differ;
	}
}
