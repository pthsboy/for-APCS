#include<iostream>

using namespace std;

int main(){
	int i,j=3,n,d,a,b,k=0,m[50]={0};
	int c[50]={100};
	cin>>i>>d;
	int p[i][j];
	/*for(a=0;a<50;a++)
	{
		c[a]=100;
	}*/
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
			cin>>p[a][b];
		}
	}
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
		    if(p[a][b]>m[a]){
		    	m[a]=p[a][b];
			}
		}
	}
	/*for(a=0;a<50;a++)
	{
		cout << c[a] << endl;
	}*/
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
		    if(p[a][b]<c[a]){
		    	c[a]=p[a][b];
			}
		}
	}
	for(a=0;a<i;a++){
		if(m[a]-c[a]>=d){
			for(b=0;b<j;b++){
			
	             n+=p[a][b];
	         }
			k++;
		}
		   
	}
	/*for(a=0;a<i;a++)
	{
		cout << m[a] <<" " << c[a] << endl; 
	}*/
//	e=n/3;
	cout<<k<<" "<<n/3<<endl;

	//一開始輸出發生問題->明明商品不成立 為何還是加進去了(總和錯了)? -> 代表最大最小值出錯 ->最大最小印出來檢查->發現最小值出錯->最小值全部印出來檢查->發現只有第一個是我們要給的100->發現語法理解有誤->選擇改用for暴力給值 
} 
