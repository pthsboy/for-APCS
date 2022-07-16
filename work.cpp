#include<iostream>

using namespace std;

int main(){
	int i,m=0,a,b,c,d,e,f,p;
	cin>>a>>b>>c>>d>>e>>f>>p;
	for(i=0;i<p;i++){
		if(a*(i*i)+(b*i)+c+d*(p-i)*(p-i)+e*(p-i)+f>m)
		{
			//m=(a*(p*p)+(b*p)+c)+(d*((p-i)*(p-i))+(e*(p-i))+f;
			//cout << m;
			m=a*(i*i)+(b*i)+c+d*(p-i)*(p-i)+e*(p-i)+f;
		}
	}
	cout<<m;
}
