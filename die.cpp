#include<iostream>
using namespace std;

int main(){
	int n=0,M=0;
	cin >> n >> M;
	int die[n][7];
	int a,b,i,j;
	int temp;
	for(int x=0;x<n;x++){
		for(j=1;j<7;j++){
			die[x][j]=j;
		}
	}
	//cout << n << M << endl;
	for(i=0;i<M;i++){
		cin>>a>>b;
		if(b==-1){
			temp=die[a][1];
			die[a][1]=die[a][3];
			die[a][3]=die[a][6];
			die[a][6]=die[a][4];
			die[a][4]=temp;
		}
		else if(b==-2){
			temp=die[a][1];
			die[a][1]=die[a][5];
			die[a][5]=die[a][6];
			die[a][6]=die[a][2];
			die[a][2]=temp;	
		}
		/*else if(a>0&&b>0){
			for(int z=1;z<7;z++)
			{
				swap(die[a][z],die[b][z]);
			}
		}*/
		else if(a>0&&b>0)
		{
			for(int s=1;s<7;s++)
			{
				temp=die[a][s];
				die[a][s]=die[b][s];
				die[b][s]=temp;
			}
		}
		//cout << M << endl;
	}
	//cout << n <<  M <<endl;
	for(int r=0;r<n;r++){
		cout<<die[r][1]<<" ";
	}
	cout<<endl;
}
