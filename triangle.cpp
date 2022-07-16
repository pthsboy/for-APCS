#include<iostream> 
using namespace std;

int main(){
	int a,b,c,temp=0;
	cin>>a>>b>>c;//cin>>b ;cin>>c;
	if(a>c){
		temp=c;
		c=a;
		a=temp;
	}else if(b>c){
		temp=c;
		c=b;
		b=temp;
	}
	if(a+b<=c){
		cout<< a<< " " << b<< " " << c<<endl;
		cout<<"No";
	}else if(a*a+b*b<c*c){
		cout<< a  <<" "<< b << " " << c <<endl;
		cout<<"Obtuse";
	}else if(a*a+b*b==c*c){
		cout<< a << " " << b << " " << c <<endl;
		cout<<"Right";
	}else if(a*a+b*b>c*c){
		cout<< a << " " << b <<" " << c <<endl;		
		cout<<"Acute";
	}
}
