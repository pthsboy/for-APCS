#include<iostream>

using namespace std;

int main(){
	int c[10000],m=0;	
	int a,b,n,i=0,j,t,x=0,y=0,z;
	cin>>a>>b>>n;
	while(cin >> c[i])
	{
		if(c[i]==0){
			z++;
		}
		if(z==n){
			break;
		}
		i++;
	}
	for(i=0;i<10000;i++){
		if(c[i]==a){
			x++;
		}
		else if(c[i]==(-a)){
			 x--;
		}
		if(c[i]==b){
			y++;
		}
		else if(c[i]==(-b)){
			y--;
		}
		if(c[i]==0){
			if(x>0&&y>0){
				m++;
			}
			x=0;
			y=0;
		}
	}
	cout<<m<<endl;
}
