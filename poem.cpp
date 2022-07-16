#include<iostream>

using namespace std;

int main(){
	int n,i,j,a=0,b=0,c=0;
	cin>>n;
	int p[n][14];
	for(i=0;i<n;i++){
		for(j=0;j<14;j++){
			cin>>p[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		if(p[i][1]==p[i][3]||p[i][8]==p[i][10]||p[i][1]!=p[i][5]||p[i][8]!=p[i][12]){
			cout<<"A";
			a++;
		}
		if(p[i][6]==0||p[i][13]==1){
			cout<<"B";
			b++;
		}
		if(p[i][1]==p[i][8]||p[i][3]==p[i][10]||p[i][5]==p[i][12]){
			cout<<"C";
			c++;
		}
		if(a<1&&b<1&&c<1){
			cout<<"None";
		}
		cout<<endl;
		a=0;
		b=0;
		c=0;
	}
	
} 
