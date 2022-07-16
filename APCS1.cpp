#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 
int main(){
	vector<int>ScoreArray;
	int n,score,max=-1,min=101;
	cin >> n;
	int m=n;
	while(n--)
	{
		cin >> score;
		ScoreArray.push_back(score);
	}
	sort(ScoreArray.begin(),ScoreArray.end());
	for(int i=0;i<m;i++)
	{
		//cout << ScoreArray[i] << " ";
		if(ScoreArray[i]>=60&&ScoreArray[i]<min){
			min=ScoreArray[i];
		}
		else if(ScoreArray[i]<60&&ScoreArray[i]>max)
		{
			max=ScoreArray[i];
		}
	}
	cout << endl; 
	if(max==-1){
		cout<<"best case" <<endl;
	}
	else{
		cout<<max<<endl;
	}
	if(min==101){
		cout<<"worst case" <<endl;
	}
	else{
		cout<<min<<endl;
	}
	/*for(vector<int>::iterator it=ScoreArray.begin();it!=ScoreArray.end();it++)
	{
		cout << *it << " "; 
	}*/
}
