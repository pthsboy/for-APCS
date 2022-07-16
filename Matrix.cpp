#include<iostream>

using namespace std;

int r(int A[10][10],int *R,int *C)
{
	int B[*C][*R];
	int i,j,tmp;
	for(i=0;i<*C;i++)
	{
		for(j=0;j<*R;j++)
		{
			B[i][*R-j-1]=A[j][i];
		}
	}
	for(i=0;i<*C;i++)
	{
		for(j=0;j<*R;j++)
		{
			A[i][j]=B[i][j];
		}
	}
	tmp=*R;
	*R=*C;
	*C=tmp;
}

int F(int A[10][10],int R,int C)
{
	int B[R][C];
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			B[R-i-1][j]=A[i][j];
		}
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			A[i][j]=B[i][j];
		}
	}
}


int main()
{
	int R,C,M,i,j,h=1;
//	cin >> R >> C >> M;
	int A[10][10];
	int a[M];
	while(h==1){
		cin >> R >> C >> M;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			cin >> A[i][j];
		}
	}
	for(i=0;i<M;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<M;i++)
	{
		if(a[i]==0)
		{
			r(A,&R,&C);
			
		}
		else
		{
			F(A,R,C);
		}
	}
	cout << R <<" " << C <<endl;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			cout<< A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
    }
}
