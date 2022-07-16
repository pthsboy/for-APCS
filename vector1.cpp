#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int i,max=-1,min=101,n;
	vector<int>scorearray;
	int m=n;
	while(n--){
		cin>>i;
		scorearray.push_back(i);
	} 
	sort(scorearray.begin(),scorearray.end());
	for(i==0;i<=m;i++){
		if(scorearray[i]<60&&scorearray[i]>max){
			min=scorearray[i];
		}else if(scorearray[i]>60&&scorearray[i]<min){
			min=scorearray[i];
			}
	}if(max==-1){
		cout<<"best case" <<endl;
	}else{
		cout<<max;
	}if(min==101){
		cout<<"worst case"<<endl;
	}else{
		cout<<min;
	}
	
	
	
} 
