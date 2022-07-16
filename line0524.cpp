#include<iostream>

using namespace std;

int main(){
	int m,n,h,i,j,k,r=0/*´X­Ó¤G*/;
	cin >> m >> n >> h;
	int p[m][n]={0},M=0,R=0;
	int a,b,c,x,y,z;
	int d,e,min=100;
	for(i=0;i<h;i++){
		cin >> a >> b >> c;
		if(c==1){
			p[a][b]=2;
			r++;
			for(j=a+1;j<m;j++){
				if(p[j][b]==2&&j-a<min){
					y=j;
					min=j-a;
					x=0;
					break;
				}
			}
			for(j=a-1;j>=0;j--){
				if(p[j][b]==2&&a-j<min){
					y=j;
					min=a-j;
					x=1;
					break;
				}
			}
			for(j=b+1;j<n;j++){
				if(p[a][j]==2&&j-b<min){
					y=j;
					min=j-b;
					x=2;
					break;
				}
			}
			for(j=b-1;j>=0;j--){
				if(p[a][j]==2&&b-j<min){
					y=j;
					min=j-b;
					x=3;
					break;
				}
			}
			if(x==0){
				for(int q=a+1;q<y;q++){
					p[q][b]=1;
				}
			}
			if(x==1){
				for(int q=a-1;q>y;q--){
					p[q][b]=1;
				}
			}
			if(x==2){
				for(int q=b+1;q<y;q++){
					p[a][q]=1;
				}
			}
			if(x==3){
				for(int q=b-1;q>y;q--){
					p[a][q]=1;
				}
			}
		}
		else if(c==0){
			p[a][b]=0;
			r--;
			for(j=a;j<m;j++){
				if(p[j][b]==2){
					for(int q=a;q<j;q++){
						p[q][b]=0;
					}
					break;
				}
			}
			for(j=0;j<m;j++){
				if(p[j][b]==2){
					
				}
			}
			for(j=0;j<n;j++){
				if(p[a][j]==2){
				
 				}
			}
		}
		for(j=0;j<n;j++){
				if(p[a][j]==2){
					
 				}
			}
		for(d=0;d<m;d++){
			for(e=0;e<n;e++){
				R+=p[d][e]-r;
				if(R>M){
				   	M=R;
				}
			}
		}
	}
	cout << M <<endl<< R <<endl;
}
