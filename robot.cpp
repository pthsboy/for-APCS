#include<iostream>

using namespace std;

int main(){
	int n,m,t=0;
	int i,j;
	while(cin>>n>>m){
		int c[n][m];
		int g;
		int million=1000000;
		int x,y,min=million;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>c[i][j];
				if(c[i][j]<million)
				{
					x=i;
					y=j;
					min=c[i][j];
				}
		}
		g=1;
		while(1)
		{
			int small=million,a,b;
			g=0;
			if(c[x-1][y]==million&&c[x+1][y]==million&&c[x][y-1]==million&&c[x][y+1]==million)
			{
				break;
			}
			if(x-1>=0){
				if(small>c[x-1][y]&&c[x-1][y]!=million){
					small=c[x-1][y];
					a=x-1;
					b=y;
					g=1;
				}
			}
			if(y+1<m){
				if(small>c[x][y+1]&&c[x][y+1]!=million){
					small=c[x][y+1];
					a=x;
					b=y+1;
					g=1;
				}
			}
			if(x+1<n){
				if(small>c[x+1][y]&&c[x+1][y]!=million){
					small=c[x+1][y];
					a=x+1;
					b=y;
					g=1;
				}
			}
			if(y-1>=0){
				if(small>c[x][y-1]&&c[x][y-1]!=million){
					small=c[x][y-1];
					a=x;
					b=y-1;
					g=1;
				}
			}
			if(c[a][b]==million)
			{
				break;
			}
			t+=c[x][y];
			c[x][y]=1000000;
			x=a,y=b;
		}
	}
	cout<<t<<endl;
	t=0;
	}
}
