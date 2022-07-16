#include<iostream>

using namespace std;

int main(){
	int a[16];
	int i;
	//int b=a[0]+a[1]+a[2]+a[3],c=a[4]+a[5]+a[6]+a[7],d=a[8]+a[9]+a[10]+a[11],e=a[12]+a[13]+a[14]+a[15];
	for(i=0;i<16;i++){
		cin>>a[i];
	}
	int b=a[0]+a[1]+a[2]+a[3],c=a[4]+a[5]+a[6]+a[7],d=a[8]+a[9]+a[10]+a[11],e=a[12]+a[13]+a[14]+a[15];
	if(b>c&&d>e){
		cout<<b<<":"<<c<<endl<<d<<":"<<e<<endl<<"win";
	}else if(b<c&&d<e){
		cout<<b<<":"<<c<<endl<<d<<":"<<e<<endl<<"lose";
	}else{
			cout<<b<<":"<<c<<endl<<d<<":"<<e<<endl<<"tie";
	}
	
	
	
	
	
	
	


}
	
	
