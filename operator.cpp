#include<iostream>
using namespace std;

int main(){
	int a,b,c,d=0;
	while(cin>>a>>b>>c){
		d=0;
	if(a==0&&b==0&&c==0){
		cout<<"AND" <<endl;
		d=1; 
	}else if(a==0&&b>0&&c==0){
		cout<<"AND" << endl;
		d=1;
	}else if(a>0&&b==0&&c==0){
		cout<<"AND" << endl;
		d=1;
	}else if(a>0&&b>0&&c==1){
		cout<<"AND" << endl;
		d=1;
	}	
	//----------------------------------
	if(a==0&&b==0&&c==0){
		cout<<"OR" << endl;
		d=1; 
	}else if(a==0&&b>0&&c==1){
		cout<<"OR" << endl;
		d=1;
	}else if(a>0&&b==0&&c==1){
		cout<<"OR" << endl;
		d=1;
	}else if(a>0&&b>0&&c==1){
		cout<<"OR" << endl;
		d=1;
	}
	//-----------------------------------
	if(a==0&&b==0&&c==0){
		cout<<"XOR" << endl;
		d=1; 
	}else if(a==0&&b>0&&c==1){
		cout<<"XOR" << endl;
		d=1;
	}else if(a>0&&b==0&&c==1){
		cout<<"XOR" << endl;
		d=1;
	}else if(a>0&&b>0&&c==0){
		cout<<"XOR" << endl;
		d=1;
	}
	if(d==0){
		cout<<"IMPOSSIBLE";
	}
	}
} 
