#include<iostream>

using namespace std;

int main(){
	int F,N;
	cin>> F >> N;
	int y[N];
	int i,j;
	int x[N];
	int t=0;
	for(i=0;i<N;i++){
		cin>>y[i];
	}
	x[0]=F;
	x[1]=y[0];
	for(j=2;j<N;j++){
		if(y[j-1]==y[j-2]){
			if(y[j-2]==5){
				x[j]=2;
			}
			if(y[j-2]==2){
				x[j]=0;
			}
			if(y[j-2]==0){
				x[j]=5;
			}
		}
		else{
			x[j]=y[j-1];
		}
	}
	for(i=0;i<N;i++){
		cout<<x[i]<<" ";
		if(x[i]==5&&y[i]==0){
			cout<<": Won at round "<<i+1;
			t++;
			break;
		}
		if(x[i]==2&&y[i]==5){
			cout<<": Won at round "<<i+1;
			t++;
			break;
		}
		if(x[i]==0&&y[i]==2){
			cout<<": Won at round "<<i+1;
			t++;
			break;
			
		}
		if(x[i]==5&&y[i]==2){
			cout<<": Lost at round "<<i+1;
			t++;
			break;
			
		}
		if(x[i]==2&&y[i]==0){
			cout<<": Lost at round "<<i+1;
			t++;
			break;
			
		}
		if(x[i]==0&&y[i]==5){
			cout<<": Lost at round "<<i+1;
			t++;
			break;
			
		}
	}
	if(t==0){
		cout<<": Drew at round "<<N;
	}
	
} 
